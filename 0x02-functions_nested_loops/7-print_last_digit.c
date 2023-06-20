#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - outputs last digit of any integer
 * @j: integer whose last digit is to be printed
 *
 * Return: last_digit
 */
int print_last_digit(int j)
{
int lastDig = j % 10;
if (lastDig < 0)
{
_putchar(abs(lastDig));
return lastDig *= -1;
}
else
{
_putchar(lastDig + '0');
return (lastDig);
}
}
