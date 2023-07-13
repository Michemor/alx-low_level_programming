#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array and initalizes with integers from min to max
 * @min: least integer value
 * @max: greatest integer value
 *
 * Return: pointer to teh array of nums or NULL
 */
int *array_range(unsigned int min, unsigned int max)
{
unsigned int i, size;
int *nums;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
nums = calloc(size, sizeof(int));
if (nums == NULL)
{
return (NULL);
}
else
{
for (i = min; i <= max; i++)
{
*(nums + i)= i;
}
return (nums);
free(nums);
}
}
