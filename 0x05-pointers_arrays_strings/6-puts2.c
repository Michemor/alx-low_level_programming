#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
int i, len;
len = strlen(str);
if (len == 0)
{
_putchar(32);
_putchar('\n');
}
else
{
for (i = 0; i <= len; i++)
{
if (i % 2 == 0)
{
puts(*(str + i));
}
}
_putchar('\n');
}
}
