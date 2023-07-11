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
if (str == NULL)
{
return (NULL);
}
s = malloc(sizeof(char) * (strlen(str)));
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
