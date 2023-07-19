#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - manipulates contents of array using callback function
 * @array: array to be manipulated
 * @size: size of the array
 * @action: callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	size_t actSize = sizeof(array) / sizeof(int *);
        if (array != NULL || action != NULL || size == actSize)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
