#include "main.h"
/**
 * print_number - prints integers
 * @n: integer to be printed
 */
void print_number(int n)
{
int num = n;
if (num < 0)
{
num *= -1;
_putchar(45);
}
num /= 10;
if (num != 0)
{
print_number(num);
}
_putchar((num % 10) + '0');
}
