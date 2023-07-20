#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up integers passed as arguments to this function
 * @n: number of integers
 *
 * Return: sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list nums;

	va_start(nums, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
