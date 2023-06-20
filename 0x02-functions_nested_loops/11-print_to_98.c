#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - prints integers to 98
 * @n: starting point of count
 */
void print_to_98(int n)
{
int m, i;
m = abs(n);
for(i = m; i <= 98; i++)
{
if(i <= 9)
{
_putchar((i % 10) + '0');
}
else
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}


