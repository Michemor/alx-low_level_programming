#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - finds the operator to be perfomed in given calculation
 * @s: operator as character
 *
 * Return: pointer to required function operation
 */
int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
i = 0;
while (i < 12)
{
	if (strcmp(s, ops[i].op) == 0)
	{
		return (ops[i].f);
	}
	i++;
}
printf("Error\n");
exit(99);
}
