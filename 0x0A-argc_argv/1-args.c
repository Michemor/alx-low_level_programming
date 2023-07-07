#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arguments passed to this program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
