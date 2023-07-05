#include <string.h>
#include "main.h"
/**
 * _puts_recursion - outputs given string to the screen
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
if (strlen(s) == 0)
{
_putchar('\n');
}
else
{
_putchar(s[0]);
_puts_recursion(s + 1);
}
}
