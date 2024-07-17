#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using jump search
 *@array: a pointer to the first element of the array
 *@size: the number of elements inside the array
 *@value: the element being searched for
 *
 * Return: returns the index of the searched element otherwise -1
**/

int jump_search(int *array, size_t size, int value)
{
	size_t a, jump;

	if (array == NULL || size == 0)
		return (-1);

	a = 0;
	jump = sqrt(size);
	while (*(array + jump) < value && jump < size)
	{

		printf("Value checked array [%li] = [%i]\n", a, *(array + a));

		a = jump;
		jump += sqrt(size);
	}
	printf("Value checked array [%li] = [%i]\n", a, *(array + a));
	printf("Value found between indexes [%li] = [%li]\n", a, jump);

	if (jump > size - 1)
		jump = size - 1;

	while (a <= jump && *(array + a) < value)
	{
		printf("Value checked array [%li] = [%i]\n", a, *(array + a));
		a++;
	}

	if (*(array + a) == value)
	{
		printf("Value checked array [%li] = [%i]\n", a, *(array + a));
		return (a);
	}
	else
	{
		return (-1);
	}
}
