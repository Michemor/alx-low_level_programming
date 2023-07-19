#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - uses callback function to print name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
	f(name);
	}
}
