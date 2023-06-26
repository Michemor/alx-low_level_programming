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
int i = 0;
int sign = 1;
unsigned int fin = 0;
while (*s++)
{
if(*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
fin = (fin * 10) + *s - '0';
}
else if (fin > 0)
{
break;
}
i++;
}
return (sign * fin);
}
