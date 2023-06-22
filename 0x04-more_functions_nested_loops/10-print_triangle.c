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
_putchar(' ');
}
for (n = 1; n <= m; n++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
