# 🎯 **Architecture-Agnostic Deep Dissection: HTTP Client CALYX Atlas**

Using **only** structural evidence from the C bundle.

---

## **1️⃣ Responsibility Decomposition Test**

### **Module Responsibilities:**

| Module | Primary Responsibility | Explicitly Does NOT |
|--------|----------------------|-------------------|
| **dbg.h** | Defines debug/error macros for logging and control flow | Does NOT implement any business logic or data structures |
| **url.h** | Declares URL data structure and parsing interface | Does NOT implement parsing logic or network operations |
| **url.c** | Parses URLs into structured components using uriparser library | Does NOT make network connections or send HTTP requests |
| **connect.h** | Declares connection and request/response interfaces | Does NOT parse URLs or manage URL structures |
| **connect.c** | Manages TCP socket connections and HTTP protocol operations | Does NOT parse URLs or validate URL structure |
| **http.c** | Orchestrates URL parsing, connection, request, and response flow | Does NOT implement parsing or socket operations directly |

**Evidence:**
- `dbg.h` only contains `#define` macros (no functions or structs)
- `url.h` declares `Url` struct and `url_parse/url_free` but doesn't implement them
- `url.c` has `#include "url.h"` and implements URL parsing but no `socket()` calls
- `connect.h` declares socket functions but no URL-related types
- `connect.c` calls `socket()`, `connect()`, `send()`, `recv()` but no `url_parse()`
- `http.c` calls both `url_parse()` and `make_connection()` but implements neither

---

## **2️⃣ Data Ownership & Flow Test**

### **Data Structure Creators:**
1. **url.c** - Creates `Url` struct via `url_parse()`
2. **connect.c** - Creates HTTP request strings via `build_request()`
3. **connect.c** - Creates socket file descriptors via `make_connection()`

### **Data Transformers:**
1. **url.c** - Transforms raw URL string → structured `Url` object
2. **connect.c** - Transforms `Url` components → HTTP request string
3. **connect.c** - Transforms socket data → `Buffer` response

### **Data Consumers:**
1. **http.c** - Consumes `Url` struct for connection parameters
2. **connect.c** - Consumes hostname/port/path for socket operations
3. **http.c** - Consumes `Buffer` response for output

### **Dominant Flow Graph:**
```
http.c (main)
  ↓
  url.c:url_parse() → Url struct
  ↓
  connect.c:init_connection(Url.hostname, Url.port) → addrinfo
  ↓
  connect.c:make_connection(addrinfo) → sockfd
  ↓
  connect.c:make_request(sockfd, Url.hostname, Url.path) → bytes_sent
  ↓
  connect.c:fetch_response(sockfd) → Buffer
  ↓
  http.c:printf(Buffer) → stdout
```

**Evidence:**
```c
// http.c orchestrates, doesn't implement
url = url_parse(argv[1]);  // Creates Url
status = init_connection(url->hostname, url->port, &res);  // Uses Url
sockfd = make_connection(res);  // Transforms addrinfo → sockfd
status = make_request(sockfd, url->hostname, url->path);  // Uses Url
status = fetch_response(sockfd, &response, RECV_SIZE);  // Creates Buffer
printf("%s\n", response->contents);  // Consumes Buffer
```

---

## **3️⃣ Purity vs Side-Effect Classification**

| Module | Classification | Evidence |
|--------|---------------|----------|
| **dbg.h** | **Pure (macros)** | Preprocessor directives only, no runtime state |
| **url.h** | **Pure (interface)** | Type declarations only, no implementation |
| **url.c** | **Stateful logic** | Calls `malloc()`, `free()`, mutates heap memory, but no I/O |
| **connect.h** | **I/O (interface)** | Declares network functions, includes `<netdb.h>`, `<unistd.h>` |
| **connect.c** | **I/O** | Calls `socket()`, `connect()`, `send()`, `recv()`, `getaddrinfo()` |
| **http.c** | **I/O + orchestration** | Calls `printf()`, `fprintf()`, manages resources, orchestrates flow |

**Key Signal:**
- **url.c** does memory allocation but **zero** network calls (stateful, not I/O)
- **connect.c** has `send()`, `recv()`, `socket()` (I/O)
- **http.c** has `printf()`, `fprintf()`, `close()` (I/O)

**Evidence of url.c being non-I/O:**
```c
// url.c - only memory operations, no file/network I/O
Url *url_parse(char *url_to_parse) {
    Url *url = malloc(sizeof(Url));  // Heap allocation
    memset(url, 0, sizeof(Url));     // Memory operation
    // ... parsing logic ...
    return url;  // Returns structured data
}
// Zero calls to: open, read, write, socket, send, recv, printf
```

**Evidence of connect.c being I/O:**
```c
// connect.c - network operations
int make_connection(struct addrinfo *res) {
    sockfd = socket(res->ai_family, ...);  // I/O
    status = connect(sockfd, ...);          // I/O
    return sockfd;
}

int make_request(int sockfd, ...) {
    bytes_sent = send(sockfd, request, ...);  // I/O
    return total_bytes_sent;
}
```

---

## **4️⃣ Replaceability / Swap Test**

### **Easiest to Replace:**
**dbg.h**

**Why:**
- Zero dependencies on other modules
- Pure compile-time macros (no runtime behavior)
- Could swap for `assert.h`, `syslog`, or nothing
- Removal would require changing call sites but not API contracts

**Evidence:**
```c
// dbg.h - standalone macros
#define debug(M, ...) fprintf(stderr, ...)
#define error_unless(A, M, ...) if(!(A)) { ... }
// No #include of any local headers
// No function declarations
// Just preprocessor text substitution
```

### **Hardest to Replace:**
**url.c**

**Why:**
- High semantic coupling (defines what a URL *is*)
- Tightly coupled to external `uriparser` library (`UriUriA`, `uriParseUriA`)
- `http.c` depends on its `Url` struct definition
- `connect.c` implicitly depends on URL structure (expects hostname/port/path)
- Changing would require coordinated changes to struct layout and parsing semantics

**Evidence:**
```c
// url.h defines THE data contract
typedef struct Url {
    char *scheme;
    char *hostname;  // connect.c expects this
    char *port;      // connect.c expects this
    char *path;      // connect.c expects this
    // ...
} Url;

// http.c depends on this structure
url = url_parse(argv[1]);
init_connection(url->hostname, url->port, &res);  // Field access
make_request(sockfd, url->hostname, url->path);   // Field access

// Changing Url struct breaks both http.c and connect.c
```

---

## **5️⃣ Hidden Centrality Test**

### **Architectural Center of Gravity:**
**url.h / url.c (the `Url` struct)**

**Why NOT http.c:**
- http.c is orchestrator but doesn't define semantics
- Just calls functions, doesn't constrain their design

**Why url.h/url.c:**
1. **Semantic coupling:** Defines what constitutes a valid HTTP URL
2. **Fan-in:** Both `http.c` and `connect.c` depend on `Url` struct layout
3. **Constraint propagation:**
   - `Url` fields determine what `connect.c` can access
   - Scheme validation (`strcmp(url->scheme, "http")`) constrains supported protocols
   - Port defaulting (`DEFAULT_PORT "80"`) hardcodes HTTP-specific behavior
4. **Extension gravity:** Adding HTTPS/FTP requires changing `url_check()` and scheme handling

**Evidence:**
```c
// url.h - THE CONTRACT
typedef struct Url {
    char *scheme;    // Constrains protocol support
    char *hostname;  // Required by connect.c
    char *port;      // Required by connect.c
    char *path;      // Required by connect.c
    // ...
} Url;

// url.c - ENFORCES CONSTRAINTS
int url_check(Url *url) {
    // This validation DEFINES what's a valid URL
    invalid = invalid || strcmp(url->scheme, "http");  // Only HTTP!
    invalid = invalid || url->hostname == NULL;
    return invalid;
}

// connect.c DEPENDS on this structure
int init_connection(char *hostname, char *port, ...) {
    // Expects hostname and port to exist
    return getaddrinfo(hostname, port, &hints, res);
}
```

**Compare to http.c:**
```c
// http.c just orchestrates, doesn't define semantics
url = url_parse(argv[1]);  // Uses Url, doesn't define it
status = init_connection(url->hostname, url->port, &res);  // Passes fields
// http.c doesn't constrain what a URL *is*, just uses it
```

---

## **6️⃣ Temporal Ordering Test**

### **Minimal Correct Order:**

1. **url_parse()** must execute first
   - Creates `Url` struct needed by all subsequent operations

2. **init_connection()** must execute before `make_connection()`
   - Creates `addrinfo` struct needed for socket creation

3. **make_connection()** must execute before `make_request()`
   - Creates socket file descriptor needed for sending

4. **make_request()** must execute before `fetch_response()`
   - Server won't send response until request is received

5. **fetch_response()** must execute before `close(sockfd)`
   - Can't read from closed socket

6. **Resource cleanup** must happen in reverse order
   - `close(sockfd)` before `freeaddrinfo(res)`
   - `url_free(url)` can happen anytime after last URL use

### **What Breaks if Violated:**

**If make_connection() before init_connection():**
```c
// CRASH: res is uninitialized
sockfd = make_connection(res);  // Segfault: res points to garbage
```

**If make_request() before make_connection():**
```c
// ERROR: sockfd is invalid
status = make_request(sockfd, ...);  // sockfd = 0 or -1, send() fails
```

**If fetch_response() before make_request():**
```c
// HANG: No data to read
status = fetch_response(sockfd, &response, RECV_SIZE);
// recv() blocks forever, server waiting for request
```

**If close() before fetch_response():**
```c
close(sockfd);
status = fetch_response(sockfd, ...);  // ERROR: recv() on closed socket
```

**Evidence from http.c:**
```c
// This order is ENFORCED by data dependencies
url = url_parse(argv[1]);  // 1. Create Url
status = init_connection(url->hostname, url->port, &res);  // 2. Resolve
sockfd = make_connection(res);  // 3. Connect
status = make_request(sockfd, url->hostname, url->path);  // 4. Send
status = fetch_response(sockfd, &response, RECV_SIZE);  // 5. Receive
printf("%s\n", response->contents);  // 6. Output
close(sockfd);  // 7. Cleanup
```

---

## **7️⃣ Extension Surface Test**

### **Feature: Add HTTPS support**

**First module to inspect:**
`url.c` (specifically `url_check()`)

**Why:** Currently enforces HTTP-only via `strcmp(url->scheme, "http")`

**Modules to modify:**
1. **url.c** - Change `url_check()` to accept "https"
2. **connect.c** - Add TLS/SSL handshake in `make_connection()`
3. **url.h** - Change `DEFAULT_PORT` logic or add `DEFAULT_HTTPS_PORT`

**Modules to AVOID:**
- ❌ **http.c** - Orchestration unchanged, just uses `Url` struct
- ❌ **dbg.h** - Debugging macros don't need changes

**Evidence:**
```c
// url.c BLOCKS https currently
int url_check(Url *url) {
    invalid = invalid || strcmp(url->scheme, "http");  // ← Must change
    // Just accept "https" too
}

// connect.c would need TLS wrapper
int make_connection(struct addrinfo *res) {
    sockfd = socket(...);
    connect(sockfd, ...);
    // ← ADD: if (is_https) { ssl_handshake(sockfd); }
    return sockfd;
}
```

---

### **Feature: Add request timeout**

**First module to inspect:**
`connect.c` (specifically `fetch_response()`)

**Modules to modify:**
1. **connect.c** - Add `select()` or `poll()` with timeout in `fetch_response()`
2. **connect.h** - Add timeout parameter to function signature

**Modules to AVOID:**
- ❌ **url.c** - URL parsing doesn't involve timeouts
- ❌ **http.c** - Just passes timeout value through

**Evidence:**
```c
// connect.c currently blocks forever
int fetch_response(int sockfd, Buffer **response, int recv_size) {
    while (1) {
        bytes_received = recv(sockfd, data, RECV_SIZE, 0);  // Blocks indefinitely
        // ← ADD: Use select() with timeout before recv()
    }
}
```

---

### **Feature: Add HTTP POST support**

**First module to inspect:**
`connect.c` (specifically `build_request()`)

**Modules to modify:**
1. **connect.c** - Modify `build_request()` to accept method and body
2. **http.c** - Parse additional CLI args for method and body

**Modules to AVOID:**
- ❌ **url.c** - URL structure unchanged (POST uses same URL format)
- ❌ **connect.c:make_connection()** - Socket creation unchanged

**Evidence:**
```c
// connect.c hardcodes GET
char *build_request(char *hostname, char *request_path) {
    buffer_appendf(request_buffer, "GET %s HTTP/1.0\r\n", request_path);
    // ← CHANGE: Accept method as parameter
    //   buffer_appendf(request_buffer, "%s %s HTTP/1.0\r\n", method, request_path);
}
```

---

## **8️⃣ Anti-Hallucination Trap**

### **Does this system include:**

| Feature | Answer | Justification |
|---------|--------|--------------|
| **HTTPS/TLS support?** | **NO** | Zero SSL/TLS library includes. No `openssl`, `gnutls`, `mbedtls`. URL validation explicitly rejects non-"http" schemes. |
| **Multithreading?** | **NO** | No `pthread.h`, no `#include <thread>`. Single-threaded blocking I/O only. |
| **HTTP/2 or HTTP/3?** | **NO** | Hardcoded `"HTTP/1.0"` in request builder. No ALPN, no QUIC, no multiplexing. |
| **Cookie handling?** | **NO** | No header parsing logic. Response stored as raw buffer, not parsed. |
| **Redirect following?** | **NO** | Single request-response cycle. No status code parsing. |

**Evidence:**
- Searched all files for: `ssl`, `tls`, `pthread`, `async`, `thread` - **zero matches**
- External includes: `Uri.h`, `buffer.h`, `netdb.h`, `stdio.h`, `stdlib.h`, `unistd.h` (standard C library only)
- Request format: `"GET %s HTTP/1.0\r\n"` (explicitly HTTP/1.0)
- URL validation: `strcmp(url->scheme, "http")` (only HTTP accepted)
- Response handling: `buffer_append(*response, data, bytes_received)` (raw bytes, no parsing)

---

## **9️⃣ Architecture Summary Compression**

**5-Sentence Summary:**

1. **Three-Layer Separation:** The system separates URL parsing (`url.c`), network operations (`connect.c`), and orchestration (`http.c`) into distinct compilation units with minimal coupling.

2. **Data Flow Contract:** A central `Url` struct defines the interface between layers, with `url.c` producing it, `connect.c` consuming its fields, and `http.c` managing its lifecycle.

3. **Synchronous Blocking I/O:** Network operations use standard POSIX sockets with blocking `recv()` calls, making the system simple but unable to handle concurrent requests or timeouts.

4. **External Dependency on uriparser:** URL parsing complexity is delegated to the `uriparser` library (`UriUriA`, `uriParseUriA`), making `url.c` a thin wrapper that normalizes library output into application structs.

5. **Error Handling via Macros:** Control flow uses `error_unless` and `jump_unless` macros (from `dbg.h`) for error propagation, creating implicit goto-based cleanup paths rather than explicit error returns.

---

## **🔟 Counterfactual Stress Test**

### **Architectural Decisions That MUST Remain:**

1. **Separation of parsing from networking**
   - URL manipulation ≠ socket operations
   - Works in any language (Python, Rust, Go)

2. **Struct-based data transfer between layers**
   - Intermediate representation of URL components
   - Could be class (OOP), record (functional), or struct (C)

3. **Sequential request-response cycle**
   - Parse → Connect → Request → Response → Close
   - HTTP protocol requirement, not C-specific

4. **Resource lifetime management**
   - Must free/close in reverse order of allocation
   - Universal (manual C, RAII C++, defer Go, Drop Rust)

### **Language-Specific Decisions That COULD Change:**

1. **Manual memory management**
   - In Rust: use ownership system
   - In Go: use garbage collection
   - In Python: automatic refcounting

2. **Preprocessor macros for debugging**
   - In Java: use logging framework
   - In Rust: use `log` crate macros
   - In Python: use `logging` module

3. **goto-based error handling**
   - In Go: use explicit `if err != nil { return err }`
   - In Rust: use `Result<T, E>` and `?` operator
   - In Python: use try/except

4. **NULL-terminated C strings**
   - In Rust: use `String` or `&str`
   - In Go: use `string` (length-prefixed)
   - In Java: use `String` objects

5. **POSIX socket API**
   - In Python: use `socket` module
   - In Java: use `java.net.Socket`
   - Same concept, different API surface

**Core Insight:**
The architecture is **layer-based with data contracts**, not C-specific. The `Url` struct is a **data transfer object** pattern. The sequential flow is HTTP's requirement, not C's. Only the manual resource management and macro-based error handling are deeply C-specific.

---

## ✅ **IR Validation Result**

### **What Held Up:**

1. ✅ **Module boundaries** - Clear separation: parse / connect / orchestrate
2. ✅ **Dependency graph** - Clean layering visible (`http.c` → both `url.c` and `connect.c`)
3. ✅ **Purity classification** - `url.c` correctly identified as stateful-but-not-I/O
4. ✅ **Center of gravity** - `Url` struct identified as architectural anchor
5. ✅ **Negative knowledge** - No HTTPS, no threading, no HTTP/2 (correctly detected)
6. ✅ **Temporal constraints** - Request-response ordering derivable from code
7. ✅ **Extension surfaces** - HTTPS/POST additions require `url.c` and `connect.c` only

### **What Would Have Failed Without Atlas IR:**

- ❌ Distinguishing `url.c` (stateful) from `connect.c` (I/O) - both use `malloc()`
- ❌ Understanding `dbg.h` is compile-time only (no runtime behavior)
- ❌ Seeing that `Url` struct constrains `connect.c` interface design
- ❌ Knowing HTTP/1.0 is hardcoded (not 1.1 or 2.0)
- ❌ Identifying uriparser as external dependency (not part of codebase)

### **Interesting Discovery:**

**Tight Coupling to uriparser Library:**
```c
// url.c is essentially a wrapper
UriUriA *uri = uri_parse(url_to_parse);  // External library
url->scheme = uri_fetch_part(&uri->scheme);  // Adapter pattern
```

This is **external dependency coupling** - replacing the URL parser would require rewriting most of `url.c`, but the `Url` struct interface could stay the same.

### **Conclusion:**

**The IR held up perfectly.** All answers derived from structural evidence. The Atlas preserved:
- Layer boundaries (parsing / networking / orchestration)
- Data flow contracts (`Url` struct as interface)
- External dependencies (uriparser library)
- I/O vs stateful logic distinction

**The system is well-structured for a small C project** - clean separation of concerns with a central data contract. The main architectural constraint is the `Url` struct, which acts as the interface between independent layers.
