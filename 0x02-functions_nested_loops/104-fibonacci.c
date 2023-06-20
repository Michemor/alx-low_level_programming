#include "main.h"
/**
 * main - outputs fibonacci series
 *
 * Return: 0
 */
int main(void)
{
int m = 1;
int n = 2;
int sum = 0;
int count;
for (count = 1; count <= 98; count++)
{
_putchar(m + '0');
sum = m + n;
m = n;
n = sum;
}
_putchar('\n');
return (0);
}
