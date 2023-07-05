#include <math.h>
#include "main.h"
/**
 * _sqrt_recursion - finds the squareroot of a number
 * @n: integer whose square root is to be calculated
 *
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
int num = 0;
if (n < 0)
{
return (-1);
}
return (helperFun(num, n));
}
/**
 * helperFun - helps the sqr_recursion fun to find root of n
 * @r: multiplicants
 * @sqr: possible square of r
 *
 * Return: the root of n if whole
 */
int helperFun(int r,int sqr)
{
if ((r*r) == sqr)
{
return (r);
}
else if ((r*r) > sqr)
{
return (-1);
}
else
{
r++;
return (helperFun(r, sqr));
}
}
