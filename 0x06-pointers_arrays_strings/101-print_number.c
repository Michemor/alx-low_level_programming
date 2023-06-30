#include "main.h"
/**
 * print_number - prints number
 * @n: number to be printed
 */
void print_number(int n)
{
unsigned int myNum = n;
if (n < 0)
{
_putchar('-');
myNum = -myNum;
}
{
if ((myNum / 10) > 0)
{
print_number(myNum / 10);
}
_putchar(myNum % 10 + '0');
}
}
