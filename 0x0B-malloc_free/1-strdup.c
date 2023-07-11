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
char *s;
int i, len = 0;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
len++;
}
s = malloc(sizeof(char) * (len + 1));
if (s != NULL)
{
return (strdup(str));
}
else
{
return (NULL);
}
free(s);
}
