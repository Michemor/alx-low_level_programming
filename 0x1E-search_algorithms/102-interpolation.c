#include "search_algos.h"

/**
 * interpolation_search - searches for a value using interpolation search
 *@array: pointer to first element in an array
 *@size: length of the array
 *@value: the element being searched
 *
 * Return: the index of the searched element otherwise return -1
**/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}
		pos = low + (((double)(high - low) / (array[high]
		- array[low])) * (value - array[low]));

		if (pos < size)
		{
			printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%li] is out of range\n", pos);
			break;
		}

		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
		if (array[pos] == value)
			return (pos);
	}
	return (-1);
}
