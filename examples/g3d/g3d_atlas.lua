-- ======================================================================
-- CALYX LUA BUNDLE - LLM OPTIMIZED FORMAT
-- ======================================================================

local CALYX_METADATA = {
  "format_version":"calyx-lua-1.0",
  "generated_at":"2025-12-15T06:46:11Z",
  "external_deps":["g3d"],
  "total_modules":9,
  "layers":{
    "UTILITY":9
  }
}

-- ======================================================================
-- MODULE MAP (name → path, layer)
-- ======================================================================
local MODULE_MAP = {
    ["g3d.model"] = {
        path = "g3d/model.lua",
        layer = "UTILITY",
        exports = ["newModel"],
    },
    ["g3d.matrices"] = {
        path = "g3d/matrices.lua",
        layer = "UTILITY",
        exports = ["newMatrix"],
    },
    ["conf"] = {
        path = "conf.lua",
        layer = "UTILITY",
        exports = [],
    },
    ["g3d.vectors"] = {
        path = "g3d/vectors.lua",
        layer = "UTILITY",
        exports = [],
    },
    ["main"] = {
        path = "main.lua",
        layer = "UTILITY",
        exports = [],
    },
    ["g3d.init"] = {
        path = "g3d/init.lua",
        layer = "UTILITY",
        exports = [],
    },
    ["g3d.collisions"] = {
        path = "g3d/collisions.lua",
        layer = "UTILITY",
        exports = ["closestPointOnLineSegment","triangleRay","triangleSphere","trianglePoint","triangleCapsule","findClosest","findAny"],
    },
    ["g3d.camera"] = {
        path = "g3d/camera.lua",
        layer = "UTILITY",
        exports = [],
    },
    ["g3d.objloader"] = {
        path = "g3d/objloader.lua",
        layer = "UTILITY",
        exports = [],
    },
}

-- ======================================================================
-- DEPENDENCY GRAPH (module → [dependencies])
-- ======================================================================
local DEPENDENCY_GRAPH = {
    ["g3d.model"] = [],
    ["g3d.matrices"] = [],
    ["conf"] = [],
    ["g3d.vectors"] = [],
    ["main"] = [],
    ["g3d.init"] = [],
    ["g3d.collisions"] = [],
    ["g3d.camera"] = [],
    ["g3d.objloader"] = [],
}

-- ======================================================================
-- MODULE CONTENTS (PRESERVED EXACTLY)
-- ======================================================================
local MODULE_CONTENTS = {
    -- ------------------------------------------------------------
    -- MODULE: g3d.model
    -- LAYER: UTILITY
    -- PATH: g3d/model.lua
    -- ------------------------------------------------------------
    ["g3d.model"] = [[
-- written by groverbuger for g3d
-- september 2021
-- MIT license

local newMatrix = require(g3d.path .. ".matrices")
local loadObjFile = require(g3d.path .. ".objloader")
local collisions = require(g3d.path .. ".collisions")
local vectors = require(g3d.path .. ".vectors")
local camera = require(g3d.path .. ".camera")
local vectorCrossProduct = vectors.crossProduct
local vectorNormalize = vectors.normalize

----------------------------------------------------------------------------------------------------
-- define a model class
----------------------------------------------------------------------------------------------------

local model = {}
model.__index = model

-- define some default properties that every model should inherit
-- that being the standard vertexFormat and basic 3D shader
model.vertexFormat = {
    {"VertexPosition", "float", 3},
    {"VertexTexCoord", "float", 2},
    {"VertexNormal", "float", 3},
    {"VertexColor", "byte", 4},
}
model.shader = g3d.shader

-- this returns a new instance of the model class
-- a model must be given a .obj file or equivalent lua table, and a texture
-- translation, rotation, and scale are all 3d vectors and are all optional
local function newModel(verts, texture, translation, rotation, scale)
    local self = setmetatable({}, model)

    -- if verts is a string, use it as a path to a .obj file
    -- otherwise verts is a table, use it as a model defintion
    if type(verts) == "string" then
        verts = loadObjFile(verts)
    end

    -- if texture is a string, use it as a path to an image file
    -- otherwise texture is already an image, so don't bother
    if type(texture) == "string" then
        texture = love.graphics.newImage(texture)
    end

    -- initialize my variables
    self.verts = verts
    self.texture = texture
    self.mesh = love.graphics.newMesh(self.vertexFormat, self.verts, "triangles")
    self.mesh:setTexture(self.texture)
    self.matrix = newMatrix()
    if type(scale) == "number" then scale = {scale, scale, scale} end
    self:setTransform(translation or {0,0,0}, rotation or {0,0,0}, scale or {1,1,1})

    return self
end

-- populate model's normals in model's mesh automatically
-- if true is passed in, then the normals are all flipped
function model:makeNormals(isFlipped)
    for i=1, #self.verts, 3 do
        if isFlipped then
            self.verts[i+1], self.verts[i+2] = self.verts[i+2], self.verts[i+1]
        end

        local vp = self.verts[i]
        local v = self.verts[i+1]
        local vn = self.verts[i+2]

        local n_1, n_2, n_3 = vectorNormalize(vectorCrossProduct(v[1]-vp[1], v[2]-vp[2], v[3]-vp[3], vn[1]-v[1], vn[2]-v[2], vn[3]-v[3]))
        vp[6], v[6], vn[6] = n_1, n_1, n_1
        vp[7], v[7], vn[7] = n_2, n_2, n_2
        vp[8], v[8], vn[8] = n_3, n_3, n_3
    end

    self.mesh = love.graphics.newMesh(self.vertexFormat, self.verts, "triangles")
    self.mesh:setTexture(self.texture)
end

-- move and rotate given two 3d vectors
function model:setTransform(translation, rotation, scale)
    self.translation = translation or self.translation
    self.rotation = rotation or self.rotation
    self.scale = scale or self.scale
    self:updateMatrix()
end

-- move given one 3d vector
function model:setTranslation(tx,ty,tz)
    self.translation[1] = tx
    self.translation[2] = ty
    self.translation[3] = tz
    self:updateMatrix()
end

-- rotate given one 3d vector
-- using euler angles
function model:setRotation(rx,ry,rz)
    self.rotation[1] = rx
    self.rotation[2] = ry
    self.rotation[3] = rz
    self.rotation[4] = nil
    self:updateMatrix()
end

-- create a quaternion from an axis and an angle
function model:setAxisAngleRotation(x,y,z,angle)
    x,y,z = vectorNormalize(x,y,z)
    angle = angle / 2

    self.rotation[1] = x * math.sin(angle)
    self.rotation[2] = y * math.sin(angle)
    self.rotation[3] = z * math.sin(angle)
    self.rotation[4] = math.cos(angle)

    self:updateMatrix()
end

-- rotate given one quaternion
function model:setQuaternionRotation(x,y,z,w)
    self.rotation[1] = x
    self.rotation[2] = y
    self.rotation[3] = z
    self.rotation[4] = w
    self:updateMatrix()
end

-- resize model's matrix based on a given 3d vector
function model:setScale(sx,sy,sz)
    self.scale[1] = sx
    self.scale[2] = sy or sx
    self.scale[3] = sz or sx
    self:updateMatrix()
end

-- update the model's transformation matrix
function model:updateMatrix()
    self.matrix:setTransformationMatrix(self.translation, self.rotation, self.scale)
end

-- align's the model matrix to a given point
-- up vector is assumed to be normalized
function model:lookAtFrom(pos, target, up)
    local pos = pos or self.translation
    self.matrix:lookAtFrom(pos, target, up or {0,0,1}, self.scale)
end

function model:lookAt(target, up)
    self.matrix:lookAtFrom(self.translation, target, up or {0,0,1}, self.scale)
end




-- draw the model
function model:draw(shader)
    local shader = shader or self.shader
    love.graphics.setShader(shader)
    shader:send("modelMatrix", self.matrix)
    shader:send("viewMatrix", camera.viewMatrix)
    shader:send("projectionMatrix", camera.projectionMatrix)
    if shader:hasUniform "isCanvasEnabled" then
        shader:send("isCanvasEnabled", love.graphics.getCanvas() ~= nil)
    end
    love.graphics.draw(self.mesh)
    love.graphics.setShader()
end

-- the fallback function if ffi was not loaded
function model:compress()
    print("[g3d warning] Compression requires FFI!\n" .. debug.traceback())
end

-- makes models use less memory when loaded in ram
-- by storing the vertex data in an array of vertix structs instead of lua tables
-- requires ffi
-- note: throws away the model's verts table
local success, ffi = pcall(require, "ffi")
if success then
    ffi.cdef([[
        struct vertex {
            float x, y, z;
            float u, v;
            float nx, ny, nz;
            uint8_t r, g, b, a;
        }
    ]])

    function model:compress()
        local data = love.data.newByteData(ffi.sizeof("struct vertex") * #self.verts)
        local datapointer = ffi.cast("struct vertex *", data:getFFIPointer())

        for i, vert in ipairs(self.verts) do
            local dataindex = i - 1
            datapointer[dataindex].x  = vert[1]
            datapointer[dataindex].y  = vert[2]
            datapointer[dataindex].z  = vert[3]
            datapointer[dataindex].u  = vert[4] or 0
            datapointer[dataindex].v  = vert[5] or 0
            datapointer[dataindex].nx = vert[6] or 0
            datapointer[dataindex].ny = vert[7] or 0
            datapointer[dataindex].nz = vert[8] or 0
            datapointer[dataindex].r  = (vert[9] or 1)*255
            datapointer[dataindex].g  = (vert[10] or 1)*255
            datapointer[dataindex].b  = (vert[11] or 1)*255
            datapointer[dataindex].a  = (vert[12] or 1)*255
        end

        self.mesh:release()
        self.mesh = love.graphics.newMesh(self.vertexFormat, #self.verts, "triangles")
        self.mesh:setVertices(data)
        self.mesh:setTexture(self.texture)
        self.verts = nil
    end
end

function model:rayIntersection(...)
    return collisions.rayIntersection(self.verts, self, ...)
end

function model:isPointInside(...)
    return collisions.isPointInside(self.verts, self, ...)
end

function model:sphereIntersection(...)
    return collisions.sphereIntersection(self.verts, self, ...)
end

function model:closestPoint(...)
    return collisions.closestPoint(self.verts, self, ...)
end

function model:capsuleIntersection(...)
    return collisions.capsuleIntersection(self.verts, self, ...)
end

return newModel

]],

    -- ------------------------------------------------------------
    -- MODULE: g3d.matrices
    -- LAYER: UTILITY
    -- PATH: g3d/matrices.lua
    -- ------------------------------------------------------------
    ["g3d.matrices"] = [[
-- written by groverbuger for g3d
-- september 2021
-- MIT license

local vectors = require(g3d.path .. ".vectors")
local vectorCrossProduct = vectors.crossProduct
local vectorDotProduct = vectors.dotProduct
local vectorNormalize = vectors.normalize

----------------------------------------------------------------------------------------------------
-- matrix class
----------------------------------------------------------------------------------------------------
-- matrices are 16 numbers in table, representing a 4x4 matrix like so:
--
-- |  1   2   3   4  |
-- |                 |
-- |  5   6   7   8  |
-- |                 |
-- |  9   10  11  12 |
-- |                 |
-- |  13  14  15  16 |

local matrix = {}
matrix.__index = matrix

local function newMatrix()
    local self = setmetatable({}, matrix)

    -- initialize a matrix as the identity matrix
    self[1],  self[2],  self[3],  self[4]  = 1, 0, 0, 0
    self[5],  self[6],  self[7],  self[8]  = 0, 1, 0, 0
    self[9],  self[10], self[11], self[12] = 0, 0, 1, 0
    self[13], self[14], self[15], self[16] = 0, 0, 0, 1

    return self
end

-- automatically converts a matrix to a string
-- for printing to console and debugging
function matrix:__tostring()
    return ("%f\t%f\t%f\t%f\n%f\t%f\t%f\t%f\n%f\t%f\t%f\t%f\n%f\t%f\t%f\t%f"):format(unpack(self))
end

----------------------------------------------------------------------------------------------------
-- transformation, projection, and rotation matrices
----------------------------------------------------------------------------------------------------
-- the three most important matrices for 3d graphics
-- these three matrices are all you need to write a simple 3d shader

-- returns a transformation matrix
-- translation, rotation, and scale are all 3d vectors
function matrix:setTransformationMatrix(translation, rotation, scale)
    -- translations
    self[4]  = translation[1]
    self[8]  = translation[2]
    self[12] = translation[3]

    -- rotations
    if #rotation == 3 then
        -- use 3D rotation vector as euler angles
        -- source: https://en.wikipedia.org/wiki/Rotation_matrix
        local ca, cb, cc = math.cos(rotation[3]), math.cos(rotation[2]), math.cos(rotation[1])
        local sa, sb, sc = math.sin(rotation[3]), math.sin(rotation[2]), math.sin(rotation[1])
        self[1], self[2],  self[3]  = ca*cb, ca*sb*sc - sa*cc, ca*sb*cc + sa*sc
        self[5], self[6],  self[7]  = sa*cb, sa*sb*sc + ca*cc, sa*sb*cc - ca*sc
        self[9], self[10], self[11] = -sb, cb*sc, cb*cc
    else
        -- use 4D rotation vector as a quaternion
        local qx, qy, qz, qw = rotation[1], rotation[2], rotation[3], rotation[4]
        self[1], self[2],  self[3]  = 1 - 2*qy^2 - 2*qz^2, 2*qx*qy - 2*qz*qw,   2*qx*qz + 2*qy*qw
        self[5], self[6],  self[7]  = 2*qx*qy + 2*qz*qw,   1 - 2*qx^2 - 2*qz^2, 2*qy*qz - 2*qx*qw
        self[9], self[10], self[11] = 2*qx*qz - 2*qy*qw,   2*qy*qz + 2*qx*qw,   1 - 2*qx^2 - 2*qy^2
    end

    -- scale
    local sx, sy, sz = scale[1], scale[2], scale[3]
    self[1], self[2],  self[3]  = self[1] * sx, self[2]  * sy, self[3]  * sz
    self[5], self[6],  self[7]  = self[5] * sx, self[6]  * sy, self[7]  * sz
    self[9], self[10], self[11] = self[9] * sx, self[10] * sy, self[11] * sz

    -- fourth row is not used, just set it to the fourth row of the identity matrix
    self[13], self[14], self[15], self[16] = 0, 0, 0, 1
end

function matrix:getScale()
    -- does not account for negative scaling
    local sx = vectorMagnitude(self[1], self[5], self[9])
    local sy = vectorMagnitude(self[2], self[6], self[10])
    local sz = vectorMagnitude(self[3], self[7], self[11])
    return sx, sy, sz
end

-- transpose of the camera (look at) matrix
function matrix:lookAtFrom(pos, target, up, orig_scale)
    self[4]  = pos[1]
    self[8]  = pos[2]
    self[12] = pos[3]

    local sx, sy, sz
    if orig_scale then
        sx, sy, sz = unpack(orig_scale)
    else
        sx, sy, sz = self:getScale()
    end

    -- forward, side, up directions
    local f_x, f_y, f_z = vectorNormalize(pos[1]-target[1], pos[2]-target[2], pos[3]-target[3])
    local s_x, s_y, s_z = vectorNormalize(vectorCrossProduct(up[1],up[2],up[3], f_x,f_y,f_z))
    local u_x, u_y, u_z = vectorCrossProduct(f_x,f_y,f_z, s_x,s_y,s_z)

    self[1], self[2], self[3]   = f_x*sx, s_x*sy, u_x*sz
    self[5], self[6], self[7]   = f_y*sx, s_y*sy, u_y*sz 
    self[9], self[10], self[11] = f_z*sx, s_z*sy, u_z*sz 
end

----------------------------------------------------------------------------------------------------
-- camera transformations
----------------------------------------------------------------------------------------------------

-- returns a perspective projection matrix
-- (things farther away appear smaller)
-- all arguments are scalars aka normal numbers
-- aspectRatio is defined as window width divided by window height
function matrix:setProjectionMatrix(fov, near, far, aspectRatio)
    local top = near * math.tan(fov/2)
    local bottom = -1*top
    local right = top * aspectRatio
    local left = -1*right

    self[1],  self[2],  self[3],  self[4]  = 2*near/(right-left), 0, (right+left)/(right-left), 0
    self[5],  self[6],  self[7],  self[8]  = 0, 2*near/(top-bottom), (top+bottom)/(top-bottom), 0
    self[9],  self[10], self[11], self[12] = 0, 0, -1*(far+near)/(far-near), -2*far*near/(far-near)
    self[13], self[14], self[15], self[16] = 0, 0, -1, 0
end

-- returns an orthographic projection matrix
-- (things farther away are the same size as things closer)
-- all arguments are scalars aka normal numbers
-- aspectRatio is defined as window width divided by window height
function matrix:setOrthographicMatrix(fov, size, near, far, aspectRatio)
    local top = size * math.tan(fov/2)
    local bottom = -1*top
    local right = top * aspectRatio
    local left = -1*right

    self[1],  self[2],  self[3],  self[4]  = 2/(right-left), 0, 0, -1*(right+left)/(right-left)
    self[5],  self[6],  self[7],  self[8]  = 0, 2/(top-bottom), 0, -1*(top+bottom)/(top-bottom)
    self[9],  self[10], self[11], self[12] = 0, 0, -2/(far-near), -(far+near)/(far-near)
    self[13], self[14], self[15], self[16] = 0, 0, 0, 1
end

-- returns a view matrix
-- eye, target, and up are all 3d vectors
function matrix:setViewMatrix(eye, target, up)
    local z1, z2, z3 = vectorNormalize(eye[1] - target[1], eye[2] - target[2], eye[3] - target[3])
    local x1, x2, x3 = vectorNormalize(vectorCrossProduct(up[1], up[2], up[3], z1, z2, z3))
    local y1, y2, y3 = vectorCrossProduct(z1, z2, z3, x1, x2, x3)

    self[1],  self[2],  self[3],  self[4]  = x1, x2, x3, -1*vectorDotProduct(x1, x2, x3, eye[1], eye[2], eye[3])
    self[5],  self[6],  self[7],  self[8]  = y1, y2, y3, -1*vectorDotProduct(y1, y2, y3, eye[1], eye[2], eye[3])
    self[9],  self[10], self[11], self[12] = z1, z2, z3, -1*vectorDotProduct(z1, z2, z3, eye[1], eye[2], eye[3])
    self[13], self[14], self[15], self[16] = 0, 0, 0, 1
end

return newMatrix

]],

    -- ------------------------------------------------------------
    -- MODULE: conf
    -- LAYER: UTILITY
    -- PATH: conf.lua
    -- ------------------------------------------------------------
    ["conf"] = [[
function love.conf(t)
    t.window.depth = 16
    t.window.title = "g3d demo"
end

]],

    -- ------------------------------------------------------------
    -- MODULE: g3d.vectors
    -- LAYER: UTILITY
    -- PATH: g3d/vectors.lua
    -- ------------------------------------------------------------
    ["g3d.vectors"] = [[
-- written by groverbuger for g3d
-- september 2021
-- MIT license

----------------------------------------------------------------------------------------------------
-- vector functions
----------------------------------------------------------------------------------------------------
-- some basic vector functions that don't use tables
-- because these functions will happen often, this is done to avoid frequent memory allocation

local vectors = {}

function vectors.subtract(v1,v2,v3, v4,v5,v6)
    return v1-v4, v2-v5, v3-v6
end

function vectors.add(v1,v2,v3, v4,v5,v6)
    return v1+v4, v2+v5, v3+v6
end

function vectors.scalarMultiply(scalar, v1,v2,v3)
    return v1*scalar, v2*scalar, v3*scalar
end

function vectors.crossProduct(a1,a2,a3, b1,b2,b3)
    return a2*b3 - a3*b2, a3*b1 - a1*b3, a1*b2 - a2*b1
end

function vectors.dotProduct(a1,a2,a3, b1,b2,b3)
    return a1*b1 + a2*b2 + a3*b3
end

function vectors.normalize(x,y,z)
    local mag = math.sqrt(x^2 + y^2 + z^2)
    if mag ~= 0 then
        return x/mag, y/mag, z/mag
    else
        return 0, 0, 0
    end
end

function vectors.magnitude(x,y,z)
    return math.sqrt(x^2 + y^2 + z^2)
end

return vectors

]],

    -- ------------------------------------------------------------
    -- MODULE: main
    -- LAYER: UTILITY
    -- PATH: main.lua
    -- ------------------------------------------------------------
    ["main"] = [[
-- written by groverbuger for g3d
-- september 2021
-- MIT license

local g3d = require "g3d"
local earth = g3d.newModel("assets/sphere.obj", "assets/earth.png", {4,0,0})
local moon = g3d.newModel("assets/sphere.obj", "assets/moon.png", {4,5,0}, nil, 0.5)
local background = g3d.newModel("assets/sphere.obj", "assets/starfield.png", nil, nil, 500)
local timer = 0

function love.update(dt)
    timer = timer + dt
    moon:setTranslation(math.cos(timer)*5 + 4, math.sin(timer)*5, 0)
    moon:setRotation(0, 0, timer - math.pi/2)
    g3d.camera.firstPersonMovement(dt)
    if love.keyboard.isDown "escape" then
        love.event.push "quit"
    end
end

function love.draw()
    earth:draw()
    moon:draw()
    background:draw()
end

function love.mousemoved(x,y, dx,dy)
    g3d.camera.firstPersonLook(dx,dy)
end

]],

    -- ------------------------------------------------------------
    -- MODULE: g3d.init
    -- LAYER: UTILITY
    -- PATH: g3d/init.lua
    -- ------------------------------------------------------------
    ["g3d.init"] = [[
-- written by groverbuger for g3d
-- september 2021
-- MIT license

--[[
         __       __
       /'__`\    /\ \
   __ /\_\L\ \   \_\ \
 /'_ `\/_/_\_<_  /'_` \
/\ \L\ \/\ \L\ \/\ \L\ \
\ \____ \ \____/\ \___,_\
 \/___L\ \/___/  \/__,_ /
   /\____/
   \_/__/
--]]

g3d = {
    _VERSION     = "g3d 1.5.2",
    _DESCRIPTION = "Simple and easy 3D engine for LÖVE.",
    _URL         = "https://github.com/groverburger/g3d",
    _LICENSE     = [[
        MIT License

        Copyright (c) 2022 groverburger

        Permission is hereby granted, free of charge, to any person obtaining a copy
        of this software and associated documentation files (the "Software"), to deal
        in the Software without restriction, including without limitation the rights
        to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
        copies of the Software, and to permit persons to whom the Software is
        furnished to do so, subject to the following conditions:

        The above copyright notice and this permission notice shall be included in all
        copies or substantial portions of the Software.

        THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
        IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
        FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
        AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
        LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
        OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
        SOFTWARE.
    ]],
    path = ...,
    shaderpath = (...):gsub("%.", "/") .. "/g3d.vert",
}

-- the shader is what does the heavy lifting, displaying 3D meshes on your 2D monitor
g3d.shader = love.graphics.newShader(g3d.shaderpath)
g3d.newModel = require(g3d.path .. ".model")
g3d.camera = require(g3d.path .. ".camera")
g3d.collisions = require(g3d.path .. ".collisions")
g3d.loadObj = require(g3d.path .. ".objloader")
g3d.vectors = require(g3d.path .. ".vectors")
g3d.camera.updateProjectionMatrix()
g3d.camera.updateViewMatrix()

-- so that far polygons don't overlap near polygons
love.graphics.setDepthMode("lequal", true)

-- get rid of g3d from the global namespace and return it instead
local g3d = g3d
_G.g3d = nil
return g3d

]],

    -- ------------------------------------------------------------
    -- MODULE: g3d.collisions
    -- LAYER: UTILITY
    -- PATH: g3d/collisions.lua
    -- ------------------------------------------------------------
    ["g3d.collisions"] = [[
-- written by groverbuger for g3d
-- september 2021
-- MIT license

local vectors = require(g3d.path .. ".vectors")
local fastSubtract = vectors.subtract
local vectorAdd = vectors.add
local vectorCrossProduct = vectors.crossProduct
local vectorDotProduct = vectors.dotProduct
local vectorNormalize = vectors.normalize
local vectorMagnitude = vectors.magnitude

----------------------------------------------------------------------------------------------------
-- collision detection functions
----------------------------------------------------------------------------------------------------
--
-- none of these functions are required for developing 3D games
-- however these collision functions are very frequently used in 3D games
--
-- be warned! a lot of this code is butt-ugly
-- using a table per vector would create a bazillion tables and lots of used memory
-- so instead all vectors are all represented using three number variables each
-- this approach ends up making the code look terrible, but collision functions need to be efficient

local collisions = {}

-- finds the closest point to the source point on the given line segment
local function closestPointOnLineSegment(
        a_x,a_y,a_z, -- point one of line segment
        b_x,b_y,b_z, -- point two of line segment
        x,y,z        -- source point
    )
    local ab_x, ab_y, ab_z = b_x - a_x, b_y - a_y, b_z - a_z
    local t = vectorDotProduct(x - a_x, y - a_y, z - a_z, ab_x, ab_y, ab_z) / (ab_x^2 + ab_y^2 + ab_z^2)
    t = math.min(1, math.max(0, t))
    return a_x + t*ab_x, a_y + t*ab_y, a_z + t*ab_z
end

-- model - ray intersection
-- based off of triangle - ray collision from excessive's CPML library
-- does a triangle - ray collision for every face in the model to find the shortest collision
--
-- sources:
--     https://github.com/excessive/cpml/blob/master/modules/intersect.lua
--     http://www.lighthouse3d.com/tutorials/maths/ray-triangle-intersection/
local tiny = 2.2204460492503131e-16 -- the smallest possible value for a double, "double epsilon"
local function triangleRay(
        tri_0_x, tri_0_y, tri_0_z,
        tri_1_x, tri_1_y, tri_1_z,
        tri_2_x, tri_2_y, tri_2_z,
        n_x, n_y, n_z,
        src_x, src_y, src_z,
        dir_x, dir_y, dir_z
    )

    -- cache these variables for efficiency
    local e11,e12,e13 = fastSubtract(tri_1_x,tri_1_y,tri_1_z, tri_0_x,tri_0_y,tri_0_z)
    local e21,e22,e23 = fastSubtract(tri_2_x,tri_2_y,tri_2_z, tri_0_x,tri_0_y,tri_0_z)
    local h1,h2,h3 = vectorCrossProduct(dir_x,dir_y,dir_z, e21,e22,e23)
    local a = vectorDotProduct(h1,h2,h3, e11,e12,e13)

    -- if a is too close to 0, ray does not intersect triangle
    if math.abs(a) <= tiny then
        return
    end

    local s1,s2,s3 = fastSubtract(src_x,src_y,src_z, tri_0_x,tri_0_y,tri_0_z)
    local u = vectorDotProduct(s1,s2,s3, h1,h2,h3) / a

    -- ray does not intersect triangle
    if u < 0 or u > 1 then
        return
    end

    local q1,q2,q3 = vectorCrossProduct(s1,s2,s3, e11,e12,e13)
    local v = vectorDotProduct(dir_x,dir_y,dir_z, q1,q2,q3) / a

    -- ray does not intersect triangle
    if v < 0 or u + v > 1 then
        return
    end

    -- at this stage we can compute t to find out where
    -- the intersection point is on the line
    local thisLength = vectorDotProduct(q1,q2,q3, e21,e22,e23) / a

    -- if hit this triangle and it's closer than any other hit triangle
    if thisLength >= tiny and (not finalLength or thisLength < finalLength) then
        --local norm_x, norm_y, norm_z = vectorCrossProduct(e11,e12,e13, e21,e22,e23)

        return thisLength, src_x + dir_x*thisLength, src_y + dir_y*thisLength, src_z + dir_z*thisLength, n_x,n_y,n_z
    end
end

-- detects a collision between a triangle and a sphere
--
-- sources:
--     https://wickedengine.net/2020/04/26/capsule-collision-detection/
local function triangleSphere(
        tri_0_x, tri_0_y, tri_0_z,
        tri_1_x, tri_1_y, tri_1_z,
        tri_2_x, tri_2_y, tri_2_z,
        tri_n_x, tri_n_y, tri_n_z,
        src_x, src_y, src_z, radius
    )

    -- recalculate surface normal of this triangle
    local side1_x, side1_y, side1_z = tri_1_x - tri_0_x, tri_1_y - tri_0_y, tri_1_z - tri_0_z
    local side2_x, side2_y, side2_z = tri_2_x - tri_0_x, tri_2_y - tri_0_y, tri_2_z - tri_0_z
    local n_x, n_y, n_z = vectorNormalize(vectorCrossProduct(side1_x, side1_y, side1_z, side2_x, side2_y, side2_z))

    -- distance from src to a vertex on the triangle
    local dist = vectorDotProduct(src_x - tri_0_x, src_y - tri_0_y, src_z - tri_0_z, n_x, n_y, n_z)

    -- collision not possible, just return
    if dist < -radius or dist > radius then
        return
    end

    -- itx stands for intersection
    local itx_x, itx_y, itx_z = src_x - n_x * dist, src_y - n_y * dist, src_z - n_z * dist

    -- determine whether itx is inside the triangle
    -- project it onto the triangle and return if this is the case
    local c0_x, c0_y, c0_z = vectorCrossProduct(itx_x - tri_0_x, itx_y - tri_0_y, itx_z - tri_0_z, tri_1_x - tri_0_x, tri_1_y - tri_0_y, tri_1_z - tri_0_z)
    local c1_x, c1_y, c1_z = vectorCrossProduct(itx_x - tri_1_x, itx_y - tri_1_y, itx_z - tri_1_z, tri_2_x - tri_1_x, tri_2_y - tri_1_y, tri_2_z - tri_1_z)
    local c2_x, c2_y, c2_z = vectorCrossProduct(itx_x - tri_2_x, itx_y - tri_2_y, itx_z - tri_2_z, tri_0_x - tri_2_x, tri_0_y - tri_2_y, tri_0_z - tri_2_z)
    if  vectorDotProduct(c0_x, c0_y, c0_z, n_x, n_y, n_z) <= 0
    and vectorDotProduct(c1_x, c1_y, c1_z, n_x, n_y, n_z) <= 0
    and vectorDotProduct(c2_x, c2_y, c2_z, n_x, n_y, n_z) <= 0 then
        n_x, n_y, n_z = src_x - itx_x, src_y - itx_y, src_z - itx_z

        -- the sphere is inside the triangle, so the normal is zero
        -- instead, just return the triangle's normal
        if n_x == 0 and n_y == 0 and n_z == 0 then
            return vectorMagnitude(n_x, n_y, n_z), itx_x, itx_y, itx_z, tri_n_x, tri_n_y, tri_n_z
        end

        return vectorMagnitude(n_x, n_y, n_z), itx_x, itx_y, itx_z, n_x, n_y, n_z
    end

    -- itx is outside triangle
    -- find points on all three line segments that are closest to itx
    -- if distance between itx and one of these three closest points is in range, there is an intersection
    local radiussq = radius * radius
    local smallestDist

    local line1_x, line1_y, line1_z = closestPointOnLineSegment(tri_0_x, tri_0_y, tri_0_z, tri_1_x, tri_1_y, tri_1_z, src_x, src_y, src_z)
    local dist = (src_x - line1_x)^2 + (src_y - line1_y)^2 + (src_z - line1_z)^2
    if dist <= radiussq then
        smallestDist = dist
        itx_x, itx_y, itx_z = line1_x, line1_y, line1_z
    end

    local line2_x, line2_y, line2_z = closestPointOnLineSegment(tri_1_x, tri_1_y, tri_1_z, tri_2_x, tri_2_y, tri_2_z, src_x, src_y, src_z)
    local dist = (src_x - line2_x)^2 + (src_y - line2_y)^2 + (src_z - line2_z)^2
    if (smallestDist and dist < smallestDist or not smallestDist) and dist <= radiussq then
        smallestDist = dist
        itx_x, itx_y, itx_z = line2_x, line2_y, line2_z
    end

    local line3_x, line3_y, line3_z = closestPointOnLineSegment(tri_2_x, tri_2_y, tri_2_z, tri_0_x, tri_0_y, tri_0_z, src_x, src_y, src_z)
    local dist = (src_x - line3_x)^2 + (src_y - line3_y)^2 + (src_z - line3_z)^2
    if (smallestDist and dist < smallestDist or not smallestDist) and dist <= radiussq then
        smallestDist = dist
        itx_x, itx_y, itx_z = line3_x, line3_y, line3_z
    end

    if smallestDist then
        n_x, n_y, n_z = src_x - itx_x, src_y - itx_y, src_z - itx_z

        -- the sphere is inside the triangle, so the normal is zero
        -- instead, just return the triangle's normal
        if n_x == 0 and n_y == 0 and n_z == 0 then
            return vectorMagnitude(n_x, n_y, n_z), itx_x, itx_y, itx_z, tri_n_x, tri_n_y, tri_n_z
        end

        return vectorMagnitude(n_x, n_y, n_z), itx_x, itx_y, itx_z, n_x, n_y, n_z
    end
end

-- finds the closest point on the triangle from the source point given
--
-- sources:
--     https://wickedengine.net/2020/04/26/capsule-collision-detection/
local function trianglePoint(
        tri_0_x, tri_0_y, tri_0_z,
        tri_1_x, tri_1_y, tri_1_z,
        tri_2_x, tri_2_y, tri_2_z,
        tri_n_x, tri_n_y, tri_n_z,
        src_x, src_y, src_z
    )

    -- recalculate surface normal of this triangle
    local side1_x, side1_y, side1_z = tri_1_x - tri_0_x, tri_1_y - tri_0_y, tri_1_z - tri_0_z
    local side2_x, side2_y, side2_z = tri_2_x - tri_0_x, tri_2_y - tri_0_y, tri_2_z - tri_0_z
    local n_x, n_y, n_z = vectorNormalize(vectorCrossProduct(side1_x, side1_y, side1_z, side2_x, side2_y, side2_z))

    -- distance from src to a vertex on the triangle
    local dist = vectorDotProduct(src_x - tri_0_x, src_y - tri_0_y, src_z - tri_0_z, n_x, n_y, n_z)

    -- itx stands for intersection
    local itx_x, itx_y, itx_z = src_x - n_x * dist, src_y - n_y * dist, src_z - n_z * dist

    -- determine whether itx is inside the triangle
    -- project it onto the triangle and return if this is the case
    local c0_x, c0_y, c0_z = vectorCrossProduct(itx_x - tri_0_x, itx_y - tri_0_y, itx_z - tri_0_z, tri_1_x - tri_0_x, tri_1_y - tri_0_y, tri_1_z - tri_0_z)
    local c1_x, c1_y, c1_z = vectorCrossProduct(itx_x - tri_1_x, itx_y - tri_1_y, itx_z - tri_1_z, tri_2_x - tri_1_x, tri_2_y - tri_1_y, tri_2_z - tri_1_z)
    local c2_x, c2_y, c2_z = vectorCrossProduct(itx_x - tri_2_x, itx_y - tri_2_y, itx_z - tri_2_z, tri_0_x - tri_2_x, tri_0_y - tri_2_y, tri_0_z - tri_2_z)
    if  vectorDotProduct(c0_x, c0_y, c0_z, n_x, n_y, n_z) <= 0
    and vectorDotProduct(c1_x, c1_y, c1_z, n_x, n_y, n_z) <= 0
    and vectorDotProduct(c2_x, c2_y, c2_z, n_x, n_y, n_z) <= 0 then
        n_x, n_y, n_z = src_x - itx_x, src_y - itx_y, src_z - itx_z

        -- the sphere is inside the triangle, so the normal is zero
        -- instead, just return the triangle's normal
        if n_x == 0 and n_y == 0 and n_z == 0 then
            return vectorMagnitude(n_x, n_y, n_z), itx_x, itx_y, itx_z, tri_n_x, tri_n_y, tri_n_z
        end

        return vectorMagnitude(n_x, n_y, n_z), itx_x, itx_y, itx_z, n_x, n_y, n_z
    end

    -- itx is outside triangle
    -- find points on all three line segments that are closest to itx
    -- if distance between itx and one of these three closest points is in range, there is an intersection
    local line1_x, line1_y, line1_z = closestPointOnLineSegment(tri_0_x, tri_0_y, tri_0_z, tri_1_x, tri_1_y, tri_1_z, src_x, src_y, src_z)
    local dist = (src_x - line1_x)^2 + (src_y - line1_y)^2 + (src_z - line1_z)^2
    local smallestDist = dist
    itx_x, itx_y, itx_z = line1_x, line1_y, line1_z

    local line2_x, line2_y, line2_z = closestPointOnLineSegment(tri_1_x, tri_1_y, tri_1_z, tri_2_x, tri_2_y, tri_2_z, src_x, src_y, src_z)
    local dist = (src_x - line2_x)^2 + (src_y - line2_y)^2 + (src_z - line2_z)^2
    if smallestDist and dist < smallestDist then
        smallestDist = dist
        itx_x, itx_y, itx_z = line2_x, line2_y, line2_z
    end

    local line3_x, line3_y, line3_z = closestPointOnLineSegment(tri_2_x, tri_2_y, tri_2_z, tri_0_x, tri_0_y, tri_0_z, src_x, src_y, src_z)
    local dist = (src_x - line3_x)^2 + (src_y - line3_y)^2 + (src_z - line3_z)^2
    if smallestDist and dist < smallestDist then
        smallestDist = dist
        itx_x, itx_y, itx_z = line3_x, line3_y, line3_z
    end

    if smallestDist then
        n_x, n_y, n_z = src_x - itx_x, src_y - itx_y, src_z - itx_z

        -- the sphere is inside the triangle, so the normal is zero
        -- instead, just return the triangle's normal
        if n_x == 0 and n_y == 0 and n_z == 0 then
            return vectorMagnitude(n_x, n_y, n_z), itx_x, itx_y, itx_z, tri_n_x, tri_n_y, tri_n_z
        end

        return vectorMagnitude(n_x, n_y, n_z), itx_x, itx_y, itx_z, n_x, n_y, n_z
    end
end

-- finds the collision point between a triangle and a capsule
-- capsules are defined with two points and a radius
--
-- sources:
--     https://wickedengine.net/2020/04/26/capsule-collision-detection/
local function triangleCapsule(
        tri_0_x, tri_0_y, tri_0_z,
        tri_1_x, tri_1_y, tri_1_z,
        tri_2_x, tri_2_y, tri_2_z,
        n_x, n_y, n_z,
        tip_x, tip_y, tip_z,
        base_x, base_y, base_z,
        a_x, a_y, a_z,
        b_x, b_y, b_z,
        capn_x, capn_y, capn_z,
        radius
    )

    -- find the normal of this triangle
    -- tbd if necessary, this sometimes fixes weird edgecases
    local side1_x, side1_y, side1_z = tri_1_x - tri_0_x, tri_1_y - tri_0_y, tri_1_z - tri_0_z
    local side2_x, side2_y, side2_z = tri_2_x - tri_0_x, tri_2_y - tri_0_y, tri_2_z - tri_0_z
    local n_x, n_y, n_z = vectorNormalize(vectorCrossProduct(side1_x, side1_y, side1_z, side2_x, side2_y, side2_z))

    local dotOfNormals = math.abs(vectorDotProduct(n_x, n_y, n_z, capn_x, capn_y, capn_z))

    -- default reference point to an arbitrary point on the triangle
    -- for when dotOfNormals is 0, because then the capsule is parallel to the triangle
    local ref_x, ref_y, ref_z = tri_0_x, tri_0_y, tri_0_z

    if dotOfNormals > 0 then
        -- capsule is not parallel to the triangle's plane
        -- find where the capsule's normal vector intersects the triangle's plane
        local t = vectorDotProduct(n_x, n_y, n_z, (tri_0_x - base_x) / dotOfNormals, (tri_0_y - base_y) / dotOfNormals, (tri_0_z - base_z) / dotOfNormals)
        local plane_itx_x, plane_itx_y, plane_itx_z = base_x + capn_x*t, base_y + capn_y*t, base_z + capn_z*t
        local _

        -- then clamp that plane intersect point onto the triangle itself
        -- this is the new reference point
        _, ref_x, ref_y, ref_z = trianglePoint(
            tri_0_x, tri_0_y, tri_0_z,
            tri_1_x, tri_1_y, tri_1_z,
            tri_2_x, tri_2_y, tri_2_z,
            n_x, n_y, n_z,
            plane_itx_x, plane_itx_y, plane_itx_z
        )
    end

    -- find the closest point on the capsule line to the reference point
    local c_x, c_y, c_z = closestPointOnLineSegment(a_x, a_y, a_z, b_x, b_y, b_z, ref_x, ref_y, ref_z)

    -- do a sphere cast from that closest point to the triangle and return the result
    return triangleSphere(
        tri_0_x, tri_0_y, tri_0_z,
        tri_1_x, tri_1_y, tri_1_z,
        tri_2_x, tri_2_y, tri_2_z,
        n_x, n_y, n_z,
        c_x, c_y, c_z, radius
    )
end

----------------------------------------------------------------------------------------------------
-- function appliers
----------------------------------------------------------------------------------------------------
-- these functions apply the collision test functions on the given list of triangles

-- runs a given intersection function on all of the triangles made up of a given vert table
local function findClosest(self, verts, func, ...)
    -- declare the variables that will be returned by the function
    local finalLength, where_x, where_y, where_z, norm_x, norm_y, norm_z

    -- cache references to this model's properties for efficiency
    local translation_x, translation_y, translation_z, scale_x, scale_y, scale_z = 0, 0, 0, 1, 1, 1
    if self then
        if self.translation then
            translation_x = self.translation[1]
            translation_y = self.translation[2]
            translation_z = self.translation[3]
        end
        if self.scale then
            scale_x = self.scale[1]
            scale_y = self.scale[2]
            scale_z = self.scale[3]
        end
    end

    for v=1, #verts, 3 do
        -- apply the function given with the arguments given
        -- also supply the points of the current triangle
        local n_x, n_y, n_z = vectorNormalize(
            verts[v][6]*scale_x,
            verts[v][7]*scale_x,
            verts[v][8]*scale_x
        )

        local length, wx,wy,wz, nx,ny,nz = func(
            verts[v][1]*scale_x + translation_x,
            verts[v][2]*scale_y + translation_y,
            verts[v][3]*scale_z + translation_z,
            verts[v+1][1]*scale_x + translation_x,
            verts[v+1][2]*scale_y + translation_y,
            verts[v+1][3]*scale_z + translation_z,
            verts[v+2][1]*scale_x + translation_x,
            verts[v+2][2]*scale_y + translation_y,
            verts[v+2][3]*scale_z + translation_z,
            n_x,
            n_y,
            n_z,
            ...
        )

        -- if something was hit
        -- and either the finalLength is not yet defined or the new length is closer
        -- then update the collision information
        if length and (not finalLength or length < finalLength) then
            finalLength = length
            where_x = wx
            where_y = wy
            where_z = wz
            norm_x = nx
            norm_y = ny
            norm_z = nz
        end
    end

    -- normalize the normal vector before it is returned
    if finalLength then
        norm_x, norm_y, norm_z = vectorNormalize(norm_x, norm_y, norm_z)
    end

    -- return all the information in a standardized way
    return finalLength, where_x, where_y, where_z, norm_x, norm_y, norm_z
end

-- runs a given intersection function on all of the triangles made up of a given vert table
local function findAny(self, verts, func, ...)
    -- cache references to this model's properties for efficiency
    local translation_x, translation_y, translation_z, scale_x, scale_y, scale_z = 0, 0, 0, 1, 1, 1
    if self then
        if self.translation then
            translation_x = self.translation[1]
            translation_y = self.translation[2]
            translation_z = self.translation[3]
        end
        if self.scale then
            scale_x = self.scale[1]
            scale_y = self.scale[2]
            scale_z = self.scale[3]
        end
    end

    for v=1, #verts, 3 do
        -- apply the function given with the arguments given
        -- also supply the points of the current triangle
        local n_x, n_y, n_z = vectorNormalize(
            verts[v][6]*scale_x,
            verts[v][7]*scale_x,
            verts[v][8]*scale_x
        )

        local length = func(
            verts[v][1]*scale_x + translation_x,
            verts[v][2]*scale_y + translation_y,
            verts[v][3]*scale_z + translation_z,
            verts[v+1][1]*scale_x + translation_x,
            verts[v+1][2]*scale_y + translation_y,
            verts[v+1][3]*scale_z + translation_z,
            verts[v+2][1]*scale_x + translation_x,
            verts[v+2][2]*scale_y + translation_y,
            verts[v+2][3]*scale_z + translation_z,
            n_x,
            n_y,
            n_z,
            ...
        )

        -- if something was hit
        -- and either the finalLength is not yet defined or the new length is closer
        -- then update the collision information
        if length then return true end
    end

    return false
end

----------------------------------------------------------------------------------------------------
-- collision functions that apply on lists of vertices
----------------------------------------------------------------------------------------------------

function collisions.rayIntersection(verts, transform, src_x, src_y, src_z, dir_x, dir_y, dir_z)
    return findClosest(transform, verts, triangleRay, src_x, src_y, src_z, dir_x, dir_y, dir_z)
end

function collisions.isPointInside(verts, transform, x, y, z)
    return findAny(transform, verts, triangleRay, x, y, z, 0, 0, 1)
end

function collisions.sphereIntersection(verts, transform, src_x, src_y, src_z, radius)
    return findClosest(transform, verts, triangleSphere, src_x, src_y, src_z, radius)
end

function collisions.closestPoint(verts, transform, src_x, src_y, src_z)
    return findClosest(transform, verts, trianglePoint, src_x, src_y, src_z)
end

function collisions.capsuleIntersection(verts, transform, tip_x, tip_y, tip_z, base_x, base_y, base_z, radius)
    -- the normal vector coming out the tip of the capsule
    local norm_x, norm_y, norm_z = vectorNormalize(tip_x - base_x, tip_y - base_y, tip_z - base_z)

    -- the base and tip, inset by the radius
    -- these two coordinates are the actual extent of the capsule sphere line
    local a_x, a_y, a_z = base_x + norm_x*radius, base_y + norm_y*radius, base_z + norm_z*radius
    local b_x, b_y, b_z = tip_x - norm_x*radius, tip_y - norm_y*radius, tip_z - norm_z*radius

    return findClosest(
        transform,
        verts,
        triangleCapsule,
        tip_x, tip_y, tip_z,
        base_x, base_y, base_z,
        a_x, a_y, a_z,
        b_x, b_y, b_z,
        norm_x, norm_y, norm_z,
        radius
    )
end

return collisions

]],

    -- ------------------------------------------------------------
    -- MODULE: g3d.camera
    -- LAYER: UTILITY
    -- PATH: g3d/camera.lua
    -- ------------------------------------------------------------
    ["g3d.camera"] = [[
-- written by groverbuger for g3d
-- september 2021
-- MIT license

local newMatrix = require(g3d.path .. ".matrices")
local g3d = g3d -- save a reference to g3d in case the user makes it non-global

----------------------------------------------------------------------------------------------------
-- define the camera singleton
----------------------------------------------------------------------------------------------------

local camera = {
    fov = math.pi/2,
    nearClip = 0.01,
    farClip = 1000,
    aspectRatio = love.graphics.getWidth()/love.graphics.getHeight(),
    position = {0,0,0},
    target = {1,0,0},
    up = {0,0,1},

    viewMatrix = newMatrix(),
    projectionMatrix = newMatrix(),
}

-- private variables used only for the first person camera functions
local fpsController = {
    direction = 0,
    pitch = 0,
}

-- read-only variables, can't be set by the end user
function camera.getDirectionPitch()
    return fpsController.direction, fpsController.pitch
end

-- convenient function to return the camera's normalized look vector
function camera.getLookVector()
    local vx = camera.target[1] - camera.position[1]
    local vy = camera.target[2] - camera.position[2]
    local vz = camera.target[3] - camera.position[3]
    local length = math.sqrt(vx^2 + vy^2 + vz^2)

    -- make sure not to divide by 0
    if length > 0 then
        return vx/length, vy/length, vz/length
    end
    return vx,vy,vz
end

-- give the camera a point to look from and a point to look towards
function camera.lookAt(x,y,z, xAt,yAt,zAt)
    camera.position[1] = x
    camera.position[2] = y
    camera.position[3] = z
    camera.target[1] = xAt
    camera.target[2] = yAt
    camera.target[3] = zAt

    -- update the fpsController's direction and pitch based on lookAt
    local dx,dy,dz = camera.getLookVector()
    fpsController.direction = math.pi/2 - math.atan2(dz, dx)
    fpsController.pitch = math.atan2(dy, math.sqrt(dx^2 + dz^2))

    -- update the camera in the shader
    camera.updateViewMatrix()
end

-- move and rotate the camera, given a point and a direction and a pitch (vertical direction)
function camera.lookInDirection(x,y,z, directionTowards,pitchTowards)
    camera.position[1] = x or camera.position[1]
    camera.position[2] = y or camera.position[2]
    camera.position[3] = z or camera.position[3]

    fpsController.direction = directionTowards or fpsController.direction
    fpsController.pitch = pitchTowards or fpsController.pitch

    -- turn the cos of the pitch into a sign value, either 1, -1, or 0
    local sign = math.cos(fpsController.pitch)
    sign = (sign > 0 and 1) or (sign < 0 and -1) or 0

    -- don't let cosPitch ever hit 0, because weird camera glitches will happen
    local cosPitch = sign*math.max(math.abs(math.cos(fpsController.pitch)), 0.00001)

    -- convert the direction and pitch into a target point
    camera.target[1] = camera.position[1]+math.cos(fpsController.direction)*cosPitch
    camera.target[2] = camera.position[2]+math.sin(fpsController.direction)*cosPitch
    camera.target[3] = camera.position[3]+math.sin(fpsController.pitch)

    -- update the camera in the shader
    camera.updateViewMatrix()
end

-- recreate the camera's view matrix from its current values
function camera.updateViewMatrix()
    camera.viewMatrix:setViewMatrix(camera.position, camera.target, camera.up)
end

-- recreate the camera's projection matrix from its current values
function camera.updateProjectionMatrix()
    camera.projectionMatrix:setProjectionMatrix(camera.fov, camera.nearClip, camera.farClip, camera.aspectRatio)
end

-- recreate the camera's orthographic projection matrix from its current values
function camera.updateOrthographicMatrix(size)
    camera.projectionMatrix:setOrthographicMatrix(camera.fov, size or 5, camera.nearClip, camera.farClip, camera.aspectRatio)
end

-- simple first person camera movement with WASD
-- put this local function in your love.update to use, passing in dt
function camera.firstPersonMovement(dt)
    -- collect inputs
    local moveX, moveY = 0, 0
    local cameraMoved = false
    local speed = 9
    if love.keyboard.isDown "w" then moveX = moveX + 1 end
    if love.keyboard.isDown "a" then moveY = moveY + 1 end
    if love.keyboard.isDown "s" then moveX = moveX - 1 end
    if love.keyboard.isDown "d" then moveY = moveY - 1 end
    if love.keyboard.isDown "space" then
        camera.position[3] = camera.position[3] + speed*dt
        cameraMoved = true
    end
    if love.keyboard.isDown "lshift" then
        camera.position[3] = camera.position[3] - speed*dt
        cameraMoved = true
    end

    -- do some trigonometry on the inputs to make movement relative to camera's direction
    -- also to make the player not move faster in diagonal directions
    if moveX ~= 0 or moveY ~= 0 then
        local angle = math.atan2(moveY, moveX)
        camera.position[1] = camera.position[1] + math.cos(fpsController.direction + angle) * speed * dt
        camera.position[2] = camera.position[2] + math.sin(fpsController.direction + angle) * speed * dt
        cameraMoved = true
    end

    -- update the camera's in the shader
    -- only if the camera moved, for a slight performance benefit
    if cameraMoved then
        camera.lookInDirection()
    end
end

-- use this in your love.mousemoved function, passing in the movements
function camera.firstPersonLook(dx,dy)
    -- capture the mouse
    love.mouse.setRelativeMode(true)

    local sensitivity = 1/300
    fpsController.direction = fpsController.direction - dx*sensitivity
    fpsController.pitch = math.max(math.min(fpsController.pitch - dy*sensitivity, math.pi*0.5), math.pi*-0.5)

    camera.lookInDirection(camera.position[1],camera.position[2],camera.position[3], fpsController.direction,fpsController.pitch)
end

return camera

]],

    -- ------------------------------------------------------------
    -- MODULE: g3d.objloader
    -- LAYER: UTILITY
    -- PATH: g3d/objloader.lua
    -- ------------------------------------------------------------
    ["g3d.objloader"] = [[
-- written by groverbuger for g3d
-- september 2021
-- MIT license

----------------------------------------------------------------------------------------------------
-- simple obj loader
----------------------------------------------------------------------------------------------------

-- give path of file
-- returns a lua table representation
return function (path, uFlip, vFlip)
    local positions, uvs, normals = {}, {}, {}
    local result = {}

    -- go line by line through the file
    for line in love.filesystem.lines(path) do
        local words = {}

        -- split the line into words
        for word in line:gmatch "([^%s]+)" do
            table.insert(words, word)
        end

        local firstWord = words[1]

        if firstWord == "v" then
            -- if the first word in this line is a "v", then this defines a vertex's position

            table.insert(positions, {tonumber(words[2]), tonumber(words[3]), tonumber(words[4])})
        elseif firstWord == "vt" then
            -- if the first word in this line is a "vt", then this defines a texture coordinate

            local u, v = tonumber(words[2]), tonumber(words[3])

            -- optionally flip these texture coordinates
            if uFlip then u = 1 - u end
            if vFlip then v = 1 - v end

            table.insert(uvs, {u, v})
        elseif firstWord == "vn" then
            -- if the first word in this line is a "vn", then this defines a vertex normal
            table.insert(normals, {tonumber(words[2]), tonumber(words[3]), tonumber(words[4])})
        elseif firstWord == "f" then

            -- if the first word in this line is a "f", then this is a face
            -- a face takes three point definitions
            -- the arguments a point definition takes are vertex, vertex texture, vertex normal in that order

            local vertices = {}
            for i = 2, #words do
                local v, vt, vn = words[i]:match "(%d*)/(%d*)/(%d*)"
                v, vt, vn = tonumber(v), tonumber(vt), tonumber(vn)
                table.insert(vertices, {
                    v and positions[v][1] or 0,
                    v and positions[v][2] or 0,
                    v and positions[v][3] or 0,
                    vt and uvs[vt][1] or 0,
                    vt and uvs[vt][2] or 0,
                    vn and normals[vn][1] or 0,
                    vn and normals[vn][2] or 0,
                    vn and normals[vn][3] or 0,
                })
            end

            -- triangulate the face if it's not already a triangle
            if #vertices > 3 then
                -- choose a central vertex
                local centralVertex = vertices[1]

                -- connect the central vertex to each of the other vertices to create triangles
                for i = 2, #vertices - 1 do
                    table.insert(result, centralVertex)
                    table.insert(result, vertices[i])
                    table.insert(result, vertices[i + 1])
                end
            else
                for i = 1, #vertices do
                    table.insert(result, vertices[i])
                end
            end

        end
    end

    return result
end

]],

}

-- ======================================================================
-- PUBLIC API (what to expose)
-- ======================================================================

local function get_module(name)
    -- Retrieve module source by name
    return MODULE_CONTENTS[name] or ""
end

local function list_modules(layer)
    -- List modules, optionally filtered by layer
    local result = {}
    for name, meta in pairs(MODULE_MAP) do
        if not layer or meta.layer == layer then
            table.insert(result, name)
        end
    end
    return result
end

local function get_dependencies(name)
    -- Get module dependencies
    return DEPENDENCY_GRAPH[name] or {}
end

local function get_layer_stats()
    -- Get statistics by layer
    return CALYX_METADATA.layers
end

local function get_external_deps()
    -- Get external dependencies
    return CALYX_METADATA.external_deps
end

-- ======================================================================
-- RUNTIME SHIM (for execution)
-- ======================================================================
local function _calyx_import_shim()
    -- Register modules in package.loaded
    -- Only create packages that exist in our bundle
    local packages = {}
    for name, _ in pairs(MODULE_CONTENTS) do
        local first_dot = name:find(".")
        if first_dot then
            local pkg = name:sub(1, first_dot - 1)
            packages[pkg] = true
        end
    end

    for pkg, _ in pairs(packages) do
        -- Create package table
        local pkg_name = pkg
        local pkg_table = {}
        package.loaded[pkg_name] = pkg_table

        -- Add submodules that belong to this package
        for full_name, content in pairs(MODULE_CONTENTS) do
            if full_name:find("^" .. pkg .. ".") then
                local sub_name = full_name:sub(#pkg + 2)
                local sub_full = pkg .. "." .. sub_name

                -- Execute the module code in its own environment
                local env = {
                    module = { exports = {} },
                    require = require,
                    _G = _G,
                    ... = ...
                }
                setmetatable(env, { __index = _G })
                local fn, err = load(content, sub_full, "t", env)
                if fn then
                    local result = fn()
                    if env.module.exports and next(env.module.exports) then
                        package.loaded[sub_full] = env.module.exports
                        pkg_table[sub_name] = env.module.exports
                    elseif result then
                        package.loaded[sub_full] = result
                        pkg_table[sub_name] = result
                    else
                        package.loaded[sub_full] = env
                        pkg_table[sub_name] = env
                    end
                else
                    error("Failed to load " .. sub_full .. ": " .. err)
                end
            end
        end
    end
end

-- Auto-register on load
_calyx_import_shim()

-- ======================================================================
-- MAIN ENTRY POINT (if run as script)
-- ======================================================================
if arg and arg[0] and debug.getinfo(1, "S").what == "main" then
    print("CALYX Lua Bundle Loaded")
    print(string.format("Modules: %d", #list_modules()))
    print(string.format("Layers: %s", json.encode(get_layer_stats())))
    print("")
    print("Available commands:")
    print("  - get_module(name)")
    print("  - list_modules(layer)")
    print("  - get_dependencies(name)")
    print("  - get_layer_stats()")
    print("  - get_external_deps()")
end

-- ======================================================================
-- EXPORTS
-- ======================================================================
return {
    get_module = get_module,
    list_modules = list_modules,
    get_dependencies = get_dependencies,
    get_layer_stats = get_layer_stats,
    get_external_deps = get_external_deps,
    metadata = CALYX_METADATA,
    module_map = MODULE_MAP,
    dependency_graph = DEPENDENCY_GRAPH,
    module_contents = MODULE_CONTENTS,
}
