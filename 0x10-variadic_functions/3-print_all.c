#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print_arg(char, va_list);
/**
 * print_all - prints all characters passed to it
 * @format: character pointer representing the list of arguments
 */
void print_all(const char *const format, ...)
{
	int i, len;
	char *separator = ", ";
	va_list ap;

	len = 0;
	while (format[len])
	{
		len++;
	}
	va_start(ap, format);
	i = 0;
	while (format[i])
	{
	print_arg(*(format + i), ap);
	if (i != (len - 1) && (*(format + i) == 'i'
			|| *(format + i) == 's' ||
			*(format + i) == 'c' ||
			*(format + i) == 'f'))
	{
	printf("%s", separator);
	}
	i++;
	}
	printf("\n");
	va_end(ap);
}

/**
 * print_arg - uses a switch case to print the equivalent character
 * @fmt: character directive
 * @ap: argument list
 *
 * Return: 0
 */
void print_arg(char fmt, va_list ap)
{
	char *str;
	int val;
	double dal;

	switch (fmt)
	{
	case 'i':
	val = va_arg(ap, int);
	printf("%d", val);
	break;
	case 'c':
	val = va_arg(ap, int);
	putchar(val);
	break;
	case 'f':
	dal = va_arg(ap, double);
	printf("%f", dal);
	break;
	case 's':
	str = va_arg(ap, char *);
	if (str == NULL)
	{
	printf("(nil)");
	}
	printf("%s", str);
	break;
	}
}
