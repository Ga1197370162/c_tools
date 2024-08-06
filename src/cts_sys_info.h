#ifndef CTS_SYS_INFO_H
#define CTS_SYS_INFO_H

#include "cts_types_def.h"

CTS_C_BEGIN

typedef struct _cts_sys_info_t {
  uint64_t thread_id;
} cts_sys_info_t;

cts_sys_info_t* cts_sys_info(void);

CTS_C_END

#endif /*!CTS_SYS_INFO_H*/