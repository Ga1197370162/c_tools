#include "cts_error.h"

typedef struct _cts_err_msg_table_t {
  uint32_t code;
  const char* msg;
} cts_err_msg_table_t;

#define ERR_MEG_TABLE_INFO(code) \
  { code, ##code }

static cts_err_msg_table_t* cts_err_msg_table_get_instance(void) {
  static cts_err_msg_table_t s_err_msg_table[] = {
#ifdef CTS_OK
      ERR_MEG_TABLE_INFO(CTS_OK),
#endif

#ifdef CTS_FAIL
      ERR_MEG_TABLE_INFO(CTS_FAIL),
#endif

#ifdef CTS_FAIL
      ERR_MEG_TABLE_INFO(CTS_FAIL),
#endif
  };
  return s_err_msg_table;
}

const char* cts_err_to_string(cts_err_t code) {
  return NULL;
}