#ifndef CTS_ERROR_H
#define CTS_ERROR_H

#include "cts_types_def.h"

CTS_C_BEGIN

typedef uint32_t cts_err_t;

#define CTS_OK 0
#define CTS_FAIL -1

#define CTS_ERR_NO_MEMORY 0x101
#define CTS_ERR_BAD_PARAM 0x102

const char* cts_err_to_string(cts_err_t code);

CTS_C_END

#endif /*!CTS_ERROR_H*/