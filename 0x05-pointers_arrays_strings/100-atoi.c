#include <stdlib.h>
#include "main.h"
/**
 * _atoi - converts string to number
 * @s: string to be converted
 *
 * Return: int value found in s
 */
int _atoi(char *s)
{
int sign = 1;
int fin;
if (*s == '-')
{
sign *= -1;
}
fin =atoi(s);
return (sign * fin);
}
