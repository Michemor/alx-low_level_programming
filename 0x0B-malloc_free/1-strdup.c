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
unsigned int len = strlen(str) + 1;
char *newStr = malloc(sizeof(char *) * len);
if (newStr == NULL)
{
return (NULL);
}
else
{
newStr = strdup(str);
return (newStr);
}
free(newStr);
}
}
