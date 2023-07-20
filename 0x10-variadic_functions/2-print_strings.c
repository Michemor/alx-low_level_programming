#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings separated by character
 * @separacter: character to separate strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{       
        unsigned int i;
	char *str;
        va_list sp;

        va_start(sp, n);
        if (separator)
        {       
        i = 0;
        while(i < n)
        {       
        str = va_arg(sp, char*);
	if (str == NULL)
	{
	printf("(nil)");
	}
	printf("%s", str);
	if (i != (n - 1))
	{
	printf("%s", separator);
	}
	i++;
	}
	}
	printf("\n");
}                       
