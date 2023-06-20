#include <stdio.h>
/**
 * main - outputs fibonacci series
 *
 * Return: 0
 */
int main(void)
{
float m = 1;
float n = 2;
float sum = 0;
int count;
for (count = 1; count <= 98; count++)
{
if (count != 98)
{
printf("%.0f, ", m);
}
else
{
printf("%.0f", m);
}
sum = m + n;
m = n;
n = sum;
}
printf("\n");
return (0);
}
