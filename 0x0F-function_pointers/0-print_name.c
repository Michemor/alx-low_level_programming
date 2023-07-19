#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints name using callback function
 * @name: name to be printed
 * @f: callback function
 */
void print_name(char *name, void (*f)(char *))
{
	if(name != NULL)
	{
		f(name);
	}
}
