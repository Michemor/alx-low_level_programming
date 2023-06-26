#include <string.h>
#include "main.h"
/**
 * puts_half - prints 2ndhalf of the characters of a string
 * @str: string to  be printed
 */
void puts_half(char *str)
{
int i, len, n;
len = strlen(str);
if (len <= 0)
{
_putchar(' ');
}
else
{
if (len % 2 != 0)
{
n = (len - 1) / 2;
}
else
{
n = len / 2;
}
for (i = n + 1; i < len; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
}
