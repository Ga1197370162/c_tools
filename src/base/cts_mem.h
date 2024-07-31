#ifndef CTS_MEM_H
#define CTS_MEM_H

#include "cts_typesdef.h"

CTS_C_BEGIN

#ifndef CTSMEM_ALLOC
#define CTSMEM_ALLOC(size) cts_mem_alloc(size, __FILE__, __LINE__)
#endif /*!CTSMEM_ALLOC*/

#ifndef CTSMEM_CALLOC
#define CTSMEM_CALLOC(size) cts_mem_calloc(size, __FILE__, __LINE__)
#endif /*!CTSMEM_CALLOC*/

#ifndef CTSMEM_ZALLOC
#define CTSMEM_ZALLOC(type) (type*)cts_mem_alloc(sizeof(type), __FILE__, __LINE__)
#endif /*!CTSMEM_ZALLOC*/

#ifndef CTSMEM_REALLOC
#define CTSMEM_REALLOC(ptr, size) cts_mem_realloc(ptr, size, __FILE__, __LINE__)
#endif /*!CTSMEM_ZALLOC*/

#ifndef CTSMEM_FREE
#define CTSMEM_FREE(ptr) \
  {                      \
    ctx_mem_free(ptr);   \
    ptr = NULL;          \
  }
#endif /*!CTSMEM_FREE*/

void* cts_mem_alloc(size_t size, const char* file, const char* line);
void* cts_mem_calloc(size_t size, const char* file, const char* line);
void* cts_mem_realloc(void* ptr, size_t size, const char* file, const char* line);
void ctx_mem_free(void* ptr, const char* file, const char* line);

CTS_C_END

#endif /*!CTS_MEM_H*/