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
for (i = 0; i < n; i++)
{
for (s = 0; s < i; s++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
