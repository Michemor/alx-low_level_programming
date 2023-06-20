#include <stdio.h>
/**
 * main - sums multiples of 3 and 5 from 0 - 1024
 *
 * Return: 0
 */
int main(void)
{
int m;
int sum = 0;
for (m = 0; m < 1024; m++)
{
if (m % 3 == 0 || m % 5 == 0)
{
sum += m;
}
else
{
continue;
}
}
printf("%d\n", sum);
return (0);
}

