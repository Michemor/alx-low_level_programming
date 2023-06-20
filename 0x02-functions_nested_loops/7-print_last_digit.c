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
int newVal = abs(j);
int lastDig = newVal % 10;
return (lastDig);
}
