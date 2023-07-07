#include <ctype.h>
#include "main.h"
/**
 * _islower - check if charcter is lowercase alphabet
 *@c: character to be checked
 *
 * Return: 1 -if lowercase
 *
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
