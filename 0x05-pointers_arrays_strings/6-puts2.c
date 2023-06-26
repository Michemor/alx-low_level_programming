#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
int i, len;
len = strlen(str);
for (i = 0; i <= len; i++)
{
if (len == 0)
{
break;
}
else
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
else
{
continue;
}
}
}
}
