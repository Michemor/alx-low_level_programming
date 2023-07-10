#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: source string to be duplicated
 *
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
unsigned int size = strlen(str);
char *s;
if (str == NULL)
{
return (NULL);
}
s = malloc(sizeof(char *) * size);
if (s != NULL)
{
s = strdup(str);
return (s);
}
else
{
return (NULL);
}
free(s);
}
