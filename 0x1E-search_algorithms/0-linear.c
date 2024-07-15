#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in the array
 *@value: value to search for
 *
 * Return: returns -1 if failed otherwise the index of the searched item
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
	{
	return (-1);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			printf("Value checked array[%li] = [%i]\n", i, *(array + i));
			if (*(array + i) == value)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
