#ifdef malloc
#undef malloc
#endif

#include <stdlib.h>
#include <stdbool.h>

static bool success = true;

void my_malloc_success()
{
    success = true;
}

void my_malloc_failure()
{
    success = false;
}

void *my_malloc(size_t size)
{
    if (success == false)
        return (NULL);
    return (malloc(size));
}