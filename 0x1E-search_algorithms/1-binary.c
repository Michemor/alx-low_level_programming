#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted list of integers
 *@array: pointer to the first element of the array
 *@size: number of elements in the array
 *@value: value to search for
 *
 * Return: returns the index of the element if found, otherwise -1
**/

int binary_search(int *array, size_t size, int value)
{
	size_t left_bound = 0;
	size_t right_bound = size - 1;
	size_t middle;

	if (array == NULL || size == 0)
		return (-1);

	if (size == 1)
		return (array[left]);

	while (left_bound != right_bound)
	{
		print_array(array, left_bound, right_bound);
		middle = (left_bound + right_bound) / 2;
		if (array[middle] < value)
		{
			left_bound = middle + 1;
		}
		else if (array[middle] > value)
		{
			right_bound = middle - 1;
		}
		else
		{
			return (middle);
		}
	}

	printf("Searching in array: %i\n", array[right_bound]);
	return (-1);
}


/**
 * print_array - prints the integers of an array
 *@start: pointer to the start of the array
 *@beg: the beginning index from which the array will be printed
 *@end: the end index from which the array will be printed
 *
**/
void print_array(int *start, int beg, int end)
{
	printf("Searching in array: ");
	while (start != NULL && beg < end)
	{
		printf("%i, ", start[beg]);
		beg++;
	}
	printf("%i\n", start[end]);
}
