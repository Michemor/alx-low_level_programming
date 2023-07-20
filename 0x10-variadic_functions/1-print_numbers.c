#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers separated by character
 * @separator: character to be printed in between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator)
	{
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(ap, int));
	if (i != (n - 1))
	{
	printf("%s", separator);
	}
	}
	}
	printf("\n");
	va_end(ap);
}
