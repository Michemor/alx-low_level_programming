#include <stdio.h>
/**
 * main - outputs fibonacci series
 *
 * Return: 0
 */
int main(void)
{
int count;
int m = 1;
int n = 2;
int sum = 0;
for (count = 1; count <= 50; count++)
{
printf("%d, ",m);
sum = m + n;
m = n;
n = sum;
}
printf("\n");
return (0);
}
