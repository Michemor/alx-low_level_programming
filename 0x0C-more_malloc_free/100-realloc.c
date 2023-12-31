#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates new memory
 * @ptr: pointer to be reallocated memory;
 * @new_size: new bytes to be added to memory
 * @old_size: initial bytes of ptr
 *
 * Return: pointer to memory
 */
void *_realloc(void *ptr, unsigned int new_size, unsigned int old_size)
{ 
char *nmem;
unsigned int nsize;
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{       
nmem = malloc(new_size);
if (nmem == NULL)
{
return (NULL);
}
return (nmem);
free(nmem);
}       
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
nsize = old_size + new_size;
nmem = realloc(ptr, nsize);
if (nmem == NULL)
{
return (NULL);
}
free(ptr);
return (nmem);
}

