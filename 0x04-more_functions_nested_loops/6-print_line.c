#include "main.h"
/**
 * print_line - prints line n number of times
 * @n: number of times line is to be printed
 */
void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('_');
}
}
_putchar('\n');
}
