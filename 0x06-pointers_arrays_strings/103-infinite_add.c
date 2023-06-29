#include "main.h"
#include <stdlib.h>
/**
 * infinite_add(char *n1, char *n2, char *r, int size_r)
 * @n1: first operand
 * @n2: second operand
 * @r: buffer
 * @size_r: size of buffer r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
*r = *n1 + *n2;
if (*r > size_r)
{
return (0);
}
return (r);
}
