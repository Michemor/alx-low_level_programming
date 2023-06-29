#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses an int array
 * @a: int array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
int i;
int temp = 0;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
