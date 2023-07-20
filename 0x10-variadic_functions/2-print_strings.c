#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings separated by character
 * @separator: character to separate strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
	str = va_arg(ap, char *);
	if (str == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}
	if (i != (n - 1) && separator != NULL)
	{
	printf("%s", separator);
	}
	i++;
	}
	printf("\n");
	va_end(ap);
}
