#include "main.h"
/**
 * print-diagonal - prints digonal line
 * @n: number of spaces
 */
void print_diagonal(int n)
{
int i, s;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (s = 1; s <= i; s++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
