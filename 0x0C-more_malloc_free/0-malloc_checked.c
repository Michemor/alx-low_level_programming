#include <stdlib.h>
#include "main.h"
/**
 * malloc-checked - allocates memory using malloc
 * @b: integer whose memory is to be allocated
 *
 * Return: pointer to allocated memory or exit with status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
else
{
return (ptr);
}
}
