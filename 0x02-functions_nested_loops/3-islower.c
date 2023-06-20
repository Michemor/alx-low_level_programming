#include <ctype.h>
#include "main.h"
/**
 * islower - check if charcter is lowercase alphabet
 *
 * Return: 1 -if lowercase
 *
 * Return: 0 -if not lowercase
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
