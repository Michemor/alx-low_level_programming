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
return (strtol(s, NULL, 10));
}
