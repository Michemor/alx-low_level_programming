#include "main.h"
/**
 * is_prime_number - checks if given integer is a prime number
 * @n: number to be checked
 *
 * Return: 1 (is prime)
 */
int is_prime_number(int n)
{
if (n < 0)
{
return (0);
}
if (n == 1)
{
return (0);
}
else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
{
return	(1);
}
else
{
return (0);
}
}
