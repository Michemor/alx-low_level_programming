#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - checks whether the integer at i is 98
 *                                           or its absolute
 *                                           or is strictly positive
 * @array: integers to be parsed
 * @size: size of the array
 * @cmp: callback function
 *
 * Return: index of the integer or -1 is unsuccessful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
	return (-1);
if (array == NULL || cmp == NULL)
{
	return (-1);
}
for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
		return (i);
}
return (-1);
}
