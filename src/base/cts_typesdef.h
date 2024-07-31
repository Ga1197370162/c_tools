#ifndef CTS_TYPESDEF_H
#define CTS_TYPESDEF_H

#include <stdint.h>

#ifdef __cplusplus
#define CTS_C_BEGIN extern "C" {
#define CTS_C_END }
#else
#define CTS_C_BEGIN
#define CTS_C_END
#endif

#ifndef return_if_failed
#define return_if_failed(expr) \
  {                            \
    if (!(expr)) {             \
      return;                  \
    }                          \
  }
#endif

#ifndef return_value_if_failed
#define return_value_if_failed(expr, value) \
  if (!(expr)) {                            \
    return value;                           \
  }
#endif

#ifndef goto_error_if_failed
#define goto_error_if_failed(expr) \
  if (!(expr)) {                   \
    goto error;                    \
  }
#endif

#ifndef INSTANCE_OF
#ifdef __compiler_offsetof
#define INSTANCE_OF(type, member_var) __compiler_offsetof(type, member_var)
#else
#define INSTANCE_OF(TYPE, member_var) ((size_t) & ((type*)0)->member_var)
#endif
#endif

#define MATH_E 2.71828f
#define MATH_PI 3.1415926f

#define UNUSED(v) ((void)v)
#define ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))

typedef int32_t ret_t;
typedef enum _ret_type_t {
  RET_OK = 0x0000,
  RET_FAIL,
  RET_BAD_PARAM,
} ret_type_t;

typedef uint8_t bool_t;
typedef enum _bool_type_t {
  TRUE = 0x01,
  FALSE = 0x00,
} bool_type_t;

#endif /*!CTS_TYPESDEF_H*/