#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an arry of char and initializes it with char c
 * @size: size of the array
 * @c: character to initialize array
 *
 * Return: NULL or 0
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
else
{
ptr = malloc(sizeof(char) * size);
if (ptr != NULL)
{
for(i = 0; i < size; i++)
{
*(ptr + i) = c;
}
return (ptr);
}
else
{
return (NULL);
}
}
}
