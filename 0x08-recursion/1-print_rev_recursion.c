#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - outputs reverse of a given string
 * @s: string to be reversed
 */
void _print_rev_recursion(char *s)
{
if(strlen(s) == 0)
{
_putchar('\n');
}
else
{
_print_rev_recursion(s + 1);
_putchar(s[0]);
}
}
