#include "main.h"
/**
 * print_square - prints square
 * @size: size of square
 */
void print_square(int size)
{
int width, length;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (length = 1; length <= size; length++)
{
for (width = 1; width <= size; width++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
