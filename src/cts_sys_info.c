#include "cts_sys_info.h"

static cts_sys_info_t s_sys_info = {
    .thread_id = 0,
};

cts_sys_info_t* cts_sys_info(void) {
  return &s_sys_info;
}