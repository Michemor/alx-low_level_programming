#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs +,-,/,*,% on two operands passed as arguments to main
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int num1, num2;
	int (*res)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	res = get_op_func(av[2]);
	if ((res == op_div && num2 == 0)
	    || (res == op_mod && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", res(num1, num2));
	return (0);
}

