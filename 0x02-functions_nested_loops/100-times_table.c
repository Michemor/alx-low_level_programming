#include "main.h"
/**
 * print_times_table - outputs multiplication table
 *@n - multiplicant
 */
void print_times_table(int n)
{
int prod, count, num;
if (n >= 15 || n == 0)
{
_putchar(' ');
}
else
{
for (count = 0; count <= n; count++)
{
for(num = 0; num <= n; num++)
{
prod = num * count;
if (prod <= 9)
{
_putchar(prod + '0');
_putchar(',');
_putchar(' ');
}
else
{
if (prod <= 99)
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else
{
_putchar((prod / 100) + '0');
_putchar((prod / 10) % 10 + '0');
}
if (prod != n)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
_putchar('\n');
}
}

