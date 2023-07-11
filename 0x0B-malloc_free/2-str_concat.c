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
int i, j = 0;
int len = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i]; i++)
{
len++;
}
for (i = 0; s2[i]; i++)
{
len++;
}
str = malloc(sizeof(char) * (len + 1));
if (str != NULL)
{
for (i = 0; s1[i]; i++)
{
str[j++] = s1[i];
}
for (i = 0; s2[i]; i++)
{
str[j++] = s2[i];
}
return (str);
}
else
{
return (NULL);
}
free(str);
}
