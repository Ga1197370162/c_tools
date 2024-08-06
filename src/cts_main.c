#include "cts_types_def.h"

#ifndef CTS_MAIN_BEGIN()
#define CTS_MAIN_BEGIN() int main(int argc, char* argv[]) {
#endif /*!CTS_MAIN_BEGIN*/

#ifndef CTS_MAIN_END()
#define CTS_MAIN_END() }
#endif /*!CTS_MAIN_END*/

extern void app_main(void);

CTS_MAIN_BEGIN()

app_main();

CTS_MAIN_END()