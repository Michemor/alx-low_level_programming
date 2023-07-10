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
if (str == NULL)
{
return (NULL);
}
else
{
char *newStr = malloc(sizeof(*str));
if (newStr == NULL)
{
return (NULL);
}
else
{
newStr = strdup(str);
return (newStr);
}
}
}
