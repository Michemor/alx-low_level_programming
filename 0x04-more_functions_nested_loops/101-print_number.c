#include "main.h"
/**
 * print_number - prints integers
 * @n: integer to be printed
 */
void print_number(int n)
{

if (n > 9 || n <= 99)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n > 99 || n <= 999)
{
_putchar((n / 10) / 10 + '0');
_putchar((n / 10) % 10 + '0');
_putchar(n % 10 + '0');
}
else if (n > 999 || n <= 1999)
{
_putchar((n / 100) / 10 + '0');
_putchar((n / 100) % 10 + '0');
_putchar((n % 100) / 10 + '0');
_putchar((n % 100) % 10 + '0');
}
else
{
_putchar(n + '0');
}
}


