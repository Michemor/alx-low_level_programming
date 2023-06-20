#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks whether character is alphabet
 * @c: character to be checked
 *
 * Return: 1 -if c is letter,lowercase or uppercase
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return 1;
}
else
{
return 0;
}
}
