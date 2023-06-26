#include <string.h>
#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: the string to be reversed
 */
void print_rev(char *s)
{
int i;
int len = strlen(s) - 1;
if (len == 0)
{
_putchar(92);
}
else
{
for (i = len; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
}
