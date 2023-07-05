#include <string.h>
#include "main.h"
/**
 * wildcmp - compares two strings regardless of * presence
 * @s1: first string
 * @s2: second string
 *
 * Return: 1(if string is equal) or 0(if not equal)
 */
int wildcmp(char *s1, char *s2)
{
int s1len = strlen(s1) - 1;
int s2len = strlen(s2) - 1;
if (s1len <= 0 || s2len <= 0)
{
return (0);
}
else
{
return (strWild(s1, s2));
}
}
/**
 * strWild - parses through string searching for wildcard combination
 * @str1: first string
 * @str2: second string
 *
 * Return: 1(if strings are equal) 0 (if not equal)
 */
int strWild(char *s1, char *s2)
{
if (*s2 == "*")
{
return (1);
}
if(strcmp(s1, s2) > 0)
{
return (1);
}
else if (strcmp(s1, s2) == 0)
{
return (1);
}
else
{
return (0);
}
}

