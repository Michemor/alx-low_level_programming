#include <stdio.h>
/**
 * main - outputs fibonacci series starting from 1 and 2, less than *           4 000 000 and even numbered only
 *
 * Return: 0
 */
int main(void)
{
long int m = 1;
long int n = 2;
long int sum = 0;
int count;
for (count = 1; count <= 100; count++)
{
if (m < 4000000)
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

