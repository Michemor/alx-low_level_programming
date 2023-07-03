#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonal of array
 * @a: array whose diagonal sum is to be calculated
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;
int i;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
}
for (i = size - 1; i >= 0; i--)
{
sum2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", sum1, sum2);
}

