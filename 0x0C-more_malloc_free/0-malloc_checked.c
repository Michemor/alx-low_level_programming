#include <stdlib.h>
#include "main.h"
/**
 * malloc-checked - allocates memory using malloc
 * @b: integer whose memory is to be allocated
 */
void *malloc_checked(unsigned int b)
{

if (malloc(b) == NULL)
{
exit(98);
}
else
{
return (malloc(b));
}
}
