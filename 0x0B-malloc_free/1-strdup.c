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
unsigned int i;
char *s;
if (str == NULL)
{
return (NULL);
}
s = malloc(sizeof(*str));
if (s != NULL)
{
for (i = 0; i < strlen(str); i++)
{
*(s + i) = *(str + i);
}
return (s);
}
else
{
return (NULL);
}
free(s);
}
