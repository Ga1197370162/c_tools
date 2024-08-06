#ifndef CTS_TYPES_DEF_H
#define CTS_TYPES_DEF_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
#define CTS_C_BEGIN extern "C" {
#define CTS_C_END }
#else
#define CTS_C_BEGIN
#define CTS_C_END
#endif

#ifndef instance_of
#ifdef __compiler_offsetof
#define instance_of(type, member_var) __compiler_offsetof(type, member_var)
#else
#define instance_of(type, member_var) ((size_t) & ((type*)0)->member_var)
#endif
#endif

#if defined(__GNUC__) && (__GNUC__ > 2) && defined(__OPTIMIZE__)
#define likely(expr) (__builtin_expect(!!(expr), 1))
#define unlikely(expr) (__builtin_expect(!!(expr), 0))
#else
#define likely(expr) (expr)
#define unlikely(expr) (expr)
#endif

#ifndef CTS_RETURN_IF_FAIL
#define CTS_RETURN_IF_FAIL(expr) \
  {                              \
    if (unlikely(expr)) {        \
      return;                    \
    }                            \
  }
#endif

#ifndef CTS_RETURN_VALUE_IF_FAIL
#define CTS_RETURN_VALUE_IF_FAIL(expr, value) \
  if (unlikely(expr)) {                       \
    return value;                             \
  }
#endif

#ifndef CTS_GOTO_ERROR_IF_FAIL
#define CTS_GOTO_ERROR_IF_FAIL(expr) \
  if (unlikely(expr)) {              \
    goto error;                      \
  }
#endif

#define CTS_UNUSE(var) ((void)(var))
#define CTS_ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))

#define CTS_BIT(nr) (1UL << (nr))
#define CTS_BIT64(nr) (1ULL << (nr))

#define CTS_MATH_E (2.71828L)
#define CTS_MATH_PI (3.14159263L)

#define CTS_PREFIX_FILE "file://"
#define CTS_PREFIX_FTP "ftp://"
#define CTS_PREFIX_HTTP "http://"
#define CTS_PERFIX_HTTPS "https://"

#include "cts_error.h"

#endif /*!CTS_TYPES_DEF_H*/