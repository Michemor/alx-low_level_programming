#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of n
 * Return: 0
 */
int main(void)
{
long n = 612852475143;
long i;
double sqrOfN = sqrt(n);
long lcm;
for (i = 1; i <= sqrOfN; i++)
{
if ((n % i) == 0)
{
lcm = n / i;
}
}
printf("%ld\n", lcm);
return (0);
}

