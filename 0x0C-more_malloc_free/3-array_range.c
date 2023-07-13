#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array and initalizes with integers from min to max
 * @min: least integer value
 * @max: greatest integer value
 *
 * Return: pointer to the array of nums or NULL
 */
int *array_range(int min, int max)
{
int i, size;
int *nums;
if (min > max)
{
return (NULL);
}
size = (max - min) + 1;
nums = malloc(sizeof(int) * size);
if (nums == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
*(nums + i) = min;
min++;
}
return (nums);
free(nums);
}
}
