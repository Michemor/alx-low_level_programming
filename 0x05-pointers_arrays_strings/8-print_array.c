#include <stdio.h>
#include "main.h"
/**
 * print_array -  prints contents of an array
 * @a: name of the array
 * @n: size of the array
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n; i++)
{
printf("%d, ", *(a + i));
}
}

