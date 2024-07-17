#include "search_algos.h"

/**
 * exponential_search - searches for an integer using exponential search
 *@array: pointer to the first element in the array
 *@size: the number of elements in the array
 *@value: the integer being searched for
 *
 * Return: the index of the searched key otherwise -1
**/

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 0, r;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (bound = 1; bound < size && array[bound] <= value; bound *= 2)
			printf("Value checked array[%li] = [%i]\n", bound, array[bound]);
	}

	if (bound >= size)
	{
		r = size - 1;
	}
	else
	{
		r = bound;
	}

	printf("Value found between indexes [%li] and [%li]\n", bound / 2, r);

	return (binary(array, (bound / 2), r, value));
}

/**
 * binary - searches for integer using binary search
 *@array: pointer to array
 *@lower: leftmost index of the array
 *@upper: rightmost index of the array
 *@value: integer being searched for
 *
 * Return: the index of the key otherwise -1
**/

int binary(int *array, int lower, int upper, int value)
{
	int middle, i;

	if (array == NULL)
		return (-1);

	while (lower <= upper)
	{
		printf("Searching in array: ");
		for (i = lower; i < upper; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);
		middle = lower + (upper - lower) / 2;

		if (array[middle] < value)
		{
			lower = middle + 1;
		}
		else if (array[middle] > value)
		{
			upper = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
