/* ====================================================================== */
/* CALYX C BUNDLE - LLM OPTIMIZED FORMAT */
/* ====================================================================== */

/* METADATA SECTION */
const char* CALYX_METADATA = {
  "format_version": "calyx-c-1.0",
  "total_files": 6,
  "total_headers": 2,
  "layers": {
    "UTILITY": 6
  },
  "external_includes": [
    "Uri.h",
    "buffer.h",
    "netdb.h",
    "stdio.h",
    "stdlib.h",
    "unistd.h"
  ],
  "generated_at": "2025-12-15T07:02:07.191082Z"
};

/* ====================================================================== */
/* FILE MAP (name → metadata) */
/* ====================================================================== */
/* FILE_MAP structure would be defined here */
/* In C, we'd use an array of structs or similar */

/*
FILE MAP:
  http/src/dbg.h:
    layer: UTILITY
    functions: []
    defines: ['__dbg_h', 'debug', 'debug', 'jump_unless', 'error_unless']
  http/src/url.h:
    layer: UTILITY
    functions: []
    defines: ['URL_H', 'URL_PATH_BUFFER_SIZE', 'DEFAULT_PORT', 'url_free_part']
  http/src/url.c:
    layer: UTILITY
    functions: ['url_parse', 'url_check', 'url_free', 'uri_fetch_path', 'length_of', 'uri_fetch_part', 'uri_fetch_port', 'uri_parse']
    defines: []
    header: url.h
  http/src/connect.h:
    layer: UTILITY
    functions: []
    defines: ['CONNECT_H', 'RECV_SIZE', 'BUF_SIZE']
  http/src/http.c:
    layer: UTILITY
    functions: ['main']
    defines: []
  http/src/connect.c:
    layer: UTILITY
    functions: ['init_connection', 'make_connection', 'build_request', 'make_request', 'fetch_response']
    defines: []
    header: connect.h
*/

/* ====================================================================== */
/* DEPENDENCY GRAPH (file → [dependencies]) */
/* ====================================================================== */
/*
DEPENDENCY GRAPH:
  http/src/url.c: ['http/src/url.h']
  http/src/http.c: ['http/src/connect.h', 'http/src/dbg.h', 'http/src/url.h']
  http/src/connect.c: ['http/src/connect.h']
  http/src/connect.h: ['http/src/dbg.h']
  http/src/dbg.h: []
  http/src/url.h: ['http/src/dbg.h']
*/

/* ====================================================================== */
/* FILE CONTENTS (PRESERVED EXACTLY) */
/* ====================================================================== */

/* HEADER FILES */
/* ------------------------------------------------------------ */
/* HEADER: http/src/url.h */
/* ------------------------------------------------------------ */
#ifndef URL_H
#define URL_H

#include <Uri.h>
#include <buffer.h>

#include "dbg.h"

#define URL_PATH_BUFFER_SIZE 512
#define DEFAULT_PORT "80"

#define url_free_part(P) if(P) { free(P); }

typedef struct Url {
    char *scheme;
    char *hostname;
    char *port;
    char *path;
    char *query;
    char *fragment;
} Url;

Url *url_parse(char *url);
void url_free(Url *url);


#endif

/* HEADER: http/src/connect.h */
/* ------------------------------------------------------------ */
#ifndef CONNECT_H
#define CONNECT_H

#include <netdb.h>
#include <unistd.h>

#include <buffer.h>
#include "dbg.h"

#define RECV_SIZE 1024
#define BUF_SIZE  RECV_SIZE + 1

int init_connection(char *hostname, char *port, struct addrinfo **res);
int make_connection(struct addrinfo *res);
int make_request(int sockfd, char *hostname, char *request_path);
int fetch_response(int sockfd, Buffer **response, int recv_size);

#endif

/* SOURCE FILES */
/* ------------------------------------------------------------ */
/* FILE: http/src/url.c */
/* LAYER: UTILITY */
/* PATH: http/src/url.c */
/* ------------------------------------------------------------ */
#include "url.h"

char *uri_fetch_path(UriUriA *uri);
int length_of(UriTextRangeA *part);
char *uri_fetch_part(UriTextRangeA *part);
char *uri_fetch_port(UriTextRangeA *part);
UriUriA *uri_parse(char *url);
int url_check(Url *url);

Url *
url_parse(char *url_to_parse)
{
    Url *url = malloc(sizeof(Url));
    memset(url, 0, sizeof(Url));

    UriUriA *uri = uri_parse(url_to_parse);

    url->scheme   = uri_fetch_part(&uri->scheme);
    url->hostname = uri_fetch_part(&uri->hostText);
    url->port     = uri_fetch_port(&uri->portText);
    url->path     = uri_fetch_path(uri);

    // TODO: handle query & fragment

    debug("Scheme: '%s', Hostname: '%s', Port: '%s', Path: '%s'", url->scheme, url->hostname, url->port, url->path);

    jump_unless(url_check(url) == 0);

    uriFreeUriMembersA(uri);
    free(uri);

    return url;
error:
    uriFreeUriMembersA(uri);
    free(uri);
    url_free(url);

    return NULL;
}

int
url_check(Url *url)
{
    int invalid = 0;

    invalid = invalid || url->scheme == NULL || strcmp(url->scheme, "http");
    invalid = invalid || url->hostname == NULL;

    return invalid;
}

void
url_free(Url *url)
{
    url_free_part(url->scheme);
    url_free_part(url->hostname);
    url_free_part(url->port);
    url_free_part(url->path);
    url_free_part(url->query);
    url_free_part(url->fragment);

    free(url);
}

char *
uri_fetch_path(UriUriA *uri)
{
    Buffer *path_buffer = buffer_alloc(URL_PATH_BUFFER_SIZE);
    UriPathSegmentA *loc = uri->pathHead;

    char *part = NULL,
         *path = NULL;

    while (loc != NULL) {
        part = uri_fetch_part(&loc->text);

        buffer_nappendf(path_buffer, length_of(&loc->text) + 1, "/%s", part);

        free(part);

        loc = loc->next;
    }

    if (buffer_strlen(path_buffer) == 0) {
        buffer_append(path_buffer, "/", 1);
    }

    path = buffer_to_s(path_buffer);

    buffer_free(path_buffer);

    return path;
}
int
length_of(UriTextRangeA *part)
{
    return part->afterLast - part->first;
}

char *
uri_fetch_part(UriTextRangeA *part)
{
    char *contents = NULL;
    int length     = length_of(part);

    if (length > 0) {
        contents = calloc(1, sizeof(char) * (length + 1));
        strncpy(contents, part->first, length);
    }

    return contents;
}

char *
uri_fetch_port(UriTextRangeA *part)
{
    char *port = uri_fetch_part(part);

    if (port == NULL) {
        port = calloc(1, (strlen(DEFAULT_PORT) + 1) * sizeof(char));
        strncpy(port, DEFAULT_PORT, strlen(DEFAULT_PORT));
    }

    return port;
}

UriUriA *
uri_parse(char *url)
{
    int status;
    UriParserStateA state;
    UriUriA *uri = malloc(sizeof(UriUriA));

    state.uri = uri;

    status = uriParseUriA(&state, url);
    jump_unless(status == URI_SUCCESS);

    status = uriNormalizeSyntaxExA(uri, URI_NORMALIZE_PATH);
    jump_unless(status == URI_SUCCESS);

    return uri;
error:
    uriFreeUriMembersA(uri);
    free(uri);

    return NULL;
}

/* FILE: http/src/http.c */
/* LAYER: UTILITY */
/* PATH: http/src/http.c */
/* ------------------------------------------------------------ */
#include <stdlib.h>
#include <stdio.h>

#include "url.h"
#include "connect.h"

#include "dbg.h"
#include <buffer.h>

int
main(int argc, char *argv[])
{
    Buffer *response = buffer_alloc(BUF_SIZE);
    Url *url;

    int status = 0;
    int sockfd = 0;
    struct addrinfo *res = NULL;

    if (argc != 2) {
        fprintf(stderr, "Usage: http <url>\n");
        buffer_free(response);
        return 1;
    }

    url = url_parse(argv[1]);
    error_unless(url, "Invalid URL supplied: '%s'", argv[1]);

    status = init_connection(url->hostname, url->port, &res);
    error_unless(status == 0, "Could not resolve host: %s\n", gai_strerror(status));

    sockfd = make_connection(res);
    error_unless(sockfd > 0, "Could not make connection to '%s' on port '%s'", url->hostname, url->port);

    status = make_request(sockfd, url->hostname, url->path);
    error_unless(status > 0, "Sending request failed");

    status = fetch_response(sockfd, &response, RECV_SIZE);
    error_unless(status >= 0, "Fetching response failed");

    printf("%s\n", response->contents);

    close(sockfd);

    freeaddrinfo(res);
    buffer_free(response);
    url_free(url);

    return 0;

error:
    if (sockfd > 0)  { close(sockfd); }
    if (res != NULL) { freeaddrinfo(res); }

    if (url) { url_free(url); }

    buffer_free(response);

    return 1;
}

/* FILE: http/src/connect.c */
/* LAYER: UTILITY */
/* PATH: http/src/connect.c */
/* ------------------------------------------------------------ */
#include "connect.h"

int
init_connection(char *hostname, char *port, struct addrinfo **res)
{
    struct addrinfo hints;

    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;

    return getaddrinfo(hostname, port, &hints, res);
}

int
make_connection(struct addrinfo *res)
{
    int sockfd, status;

    sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    jump_unless(sockfd > 0);

    status = connect(sockfd, res->ai_addr, res->ai_addrlen);
    jump_unless(status == 0);

    return sockfd;

error:
    return -1;
}

char *
build_request(char *hostname, char *request_path)
{
    char *request = NULL;
    Buffer *request_buffer = buffer_alloc(BUF_SIZE);

    buffer_appendf(request_buffer, "GET %s HTTP/1.0\r\n", request_path);
    buffer_appendf(request_buffer, "Host: %s\r\n", hostname);
    buffer_appendf(request_buffer, "Connection: close\r\n\r\n");

    request = buffer_to_s(request_buffer);
    buffer_free(request_buffer);

    return request;
}

int
make_request(int sockfd, char *hostname, char *request_path)
{
    char *request           = build_request(hostname, request_path);
    size_t bytes_sent       = 0;
    size_t total_bytes_sent = 0;
    size_t bytes_to_send    = strlen(request);

    debug("Bytes to send: %ld", bytes_to_send);

    while (1) {
        bytes_sent = send(sockfd, request, strlen(request), 0);
        total_bytes_sent += bytes_sent;

        debug("Bytes sent: %ld", bytes_sent);

        if (total_bytes_sent >= bytes_to_send) {
            break;
        }
    }

    free(request);

    return total_bytes_sent;
}

int
fetch_response(int sockfd, Buffer **response, int recv_size)
{
    size_t bytes_received;
    int status = 0;
    char data[recv_size];

    debug("Receiving data ...");

    while (1) {
        bytes_received = recv(sockfd, data, RECV_SIZE, 0);

        if (bytes_received == -1) {
            return -1;
        } else if (bytes_received == 0) {
            return 0;
        }

        if (bytes_received > 0) {
            status = buffer_append(*response, data, bytes_received);
            if (status != 0) {
                fprintf(stderr, "Failed to append to buffer.\n");
                return -1;
            }
        }
    }

    debug("Finished receiving data.");

    return status;
}


/* ====================================================================== */
/* PUBLIC API SUMMARY */
/* ====================================================================== */
/*
AVAILABLE FUNCTIONS BY MODULE:
  http/src/url.c:
    - url_parse
    - url_check
    - url_free
    - uri_fetch_path
    - length_of
    - uri_fetch_part
    - uri_fetch_port
    - uri_parse
  http/src/http.c:
    - main
  http/src/connect.c:
    - init_connection
    - make_connection
    - build_request
    - make_request
    - fetch_response

DEFINED MACROS:
  - BUF_SIZE
  - CONNECT_H
  - DEFAULT_PORT
  - RECV_SIZE
  - URL_H
  - URL_PATH_BUFFER_SIZE
  - __dbg_h
  - debug
  - error_unless
  - jump_unless
  - url_free_part
*/

/* ====================================================================== */
/* COMPILATION NOTES */
/* ====================================================================== */
/*
This is a CALYX bundle - not meant for direct compilation.
To compile the original project:
  1. Extract files using the structure above
  2. Use the original build system (Makefile, CMake, etc.)
  3. Link with external dependencies:
     - Uri.h
     - buffer.h
     - netdb.h
     - stdio.h
     - stdlib.h
     - unistd.h
*/

/* ====================================================================== */
/* HELPER FUNCTIONS (for analysis) */
/* ====================================================================== */
/*
To analyze this bundle programmatically:
  1. Parse CALYX_METADATA JSON string
  2. Scan for /* FILE: comments to locate files
  3. Use dependency graph for build order
  4. Extract functions using regex patterns
*/
