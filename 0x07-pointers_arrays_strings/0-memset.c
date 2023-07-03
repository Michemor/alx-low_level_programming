#include "main.h"
/**
 * _memset - prints b charcters n times in string s
 * @s: target string
 * @b: character to be printed repeatedly
 * @n: number of times character is to be printed
 *
 * Return: string s
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n-- != 0)
{
*s++ = b;
}
return (s);
}
