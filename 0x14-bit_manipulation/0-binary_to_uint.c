#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: string containing binary numbers to be converted to decimal
  *
  * Return: decimal representation of type unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int len;
	unsigned int res = 1;
	unsigned int sum = 0;

	if (b == NULL)
	{
		return (0);
	}

	len = (strlen(b) - 1);
	i = len;
	while (i >= 0)
	{
	if ((b[i] != '1') && (b[i] != '0'))
	{
	return (0);
	}
	if (b[i] == '1')
	{
	sum += res;
	}
	res *= 2;
	i--;
	}
	return (sum);
}
