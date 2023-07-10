#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *str;
str = malloc(sizeof(*s1) * sizeof(*s2));
if (s1 == NULL)
{
return (s2);
}
else if (s2 == NULL)
{
return (s1);
}
else if (str != NULL)
{
str = strcat(str, s1);
str = strcat(str, s2);
return (str);
}
else
{
return (NULL);
}
}
