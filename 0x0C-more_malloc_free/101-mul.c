#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main - multiplies two numbers passed to main
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 or 98
 */
int main(int ac, char **av)
{
	int num1, num2, mul = 1;
	num1 = strtol(av[1], NULL, 10);
	num2 = strtol(av[2], NULL, 10);
	if (ac != 3)
	{
		printf("Error\n");
		exit (98);
	}
	else
	{
         mul = num1 * num2;
	 printf("%d\n", mul);
	}
	return (0);
}

