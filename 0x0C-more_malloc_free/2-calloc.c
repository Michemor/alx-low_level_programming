#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory using calloc
 * @nmemb: number of blocks in memory to be allocated
 * @size: size to be allocated
 *
 * Return: NULL or pointer to new memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memSize;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
memSize = calloc(nmemb, size);
if (memSize == NULL)
{
return (NULL);
}
else
{
return (memSize);
}
}
