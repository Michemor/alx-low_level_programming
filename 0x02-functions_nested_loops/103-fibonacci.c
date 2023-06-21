#include <stdio.h>
/**
 * main - outputs fibonacci series for even numbers only
 * :
 * Return: 0
 */
int main(void)
{
long int m = 1;
long int n = 2;
long int sum = 0;
int count;
long int tot_sum = 0;
for (count = 1; count <= 1000; count++)
{
if (m > 4000000)
{
break;
}
if (m % 2 == 0)
{
sum = m + n;
tot_sum += sum;
m = n;
n = sum;
}
}
printf("%ld\n", tot_sum);
return (0);
}

