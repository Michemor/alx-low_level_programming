#include <string.h>
#include "main.h"
/**
 * _strcmp - compares strings s1 and s2
 * @s1: first string
 * @s2: second string
 *
 * Return: < 0 , > 0 or 0 depending on given conditions
 */
int _strcmp(char *s1, char *s2)
{
if (strcmp(s1, s2) > 0)
{
return (15);
}
else if (strcmp(s1, s2) < 0)
{
return (-15);
}
else
{
return (0);
}
}
