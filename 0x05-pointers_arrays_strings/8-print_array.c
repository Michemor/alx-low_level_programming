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
int size = n - 2;
if (n <= 0)
{
printf(" \n");
}
else if (n == 1)
{
printf("%d\n", *a);
}
else
{
for (i = 0; i <= size; i++)
{
printf("%d, ", *(a + i));
}
printf("%d\n", *(a + (n - 1)));
}
}
