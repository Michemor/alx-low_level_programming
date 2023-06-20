#include <stdio.h>
/**
 * main - print sum of multiples of three and five
 *
 * Return: 0
 */
int main(void)
{
int m, sum = 0;
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
