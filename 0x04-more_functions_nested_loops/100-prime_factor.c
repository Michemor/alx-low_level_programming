#include <stdio.h>
/**
 * main - prints the largest prime factor of n
 * Return: 0
 */
int main(void)
{
int n = 1231952;
int i;
int lcm = 0;
for (i = 1; i < n; i++)
{
if ((n % i) == 0)
{
if (i > lcm)
{
lcm = i;
}
}
}
printf("%d\n", lcm);
return (0);
}

