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
for (count = 1; count <= 1000; count++)
{
if (m < 4000000 &&  m % 2 == 0)
{
printf("%ld, ", m);
}
else
{
break;
}
sum = m + n;
m = n;
n = sum;
}
printf("\n");
return (0);
}

