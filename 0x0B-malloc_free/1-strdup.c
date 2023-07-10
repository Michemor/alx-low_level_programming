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
char *newStr;
unsigned int i;
if (str == NULL)
{
return (NULL);
}
else
{
newStr = (char *)malloc(sizeof(*str));
if (newStr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < strlen(str); i++)
{
*(newStr + i) = *(str + i);
}
return (newStr);
free(newStr);
}
}
}
