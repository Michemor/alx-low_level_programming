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
if (size <= 0)
{

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
