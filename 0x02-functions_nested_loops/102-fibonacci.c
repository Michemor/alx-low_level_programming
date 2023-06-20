#include <stdio.h>
/**
 * main - outputs fibonacci series
 *
 * Return: 0
 */
int main(void)
{
int count;
long int m = 1;
long int n = 2;
long int sum = 0;
for (count = 1; count <= 50; count++)
{
if (count != 50)
{
printf("%ld, ", m);
}
else
{
printf("%ld", m);
}
sum = m + n;
m = n;
n = sum;
}
printf("\n");
return (0);
}
