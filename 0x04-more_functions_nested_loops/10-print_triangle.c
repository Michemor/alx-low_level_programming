#include "main.h"
/**
 * print_triangle - prints triangle
 * @size - triangle size
 */
void print_triangle(int size)
{
int m, n, space;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (m = 1; m <= size; m++)
{
for (space = size; space >= m; space--)
{
_putchar(32);
}
for (n = 1; n <= m; n++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
