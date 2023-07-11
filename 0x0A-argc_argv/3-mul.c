#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiploes two arguments passed to it
 * @argc: number of arguments passed
 * @argv: argument vector
 *
 * Return: 1(if not successful) or  0(if successful)
 */
int main(int argc, char **argv)
{
int i;
unsigned int a, b, mult = 1;
if (argc == 3)
{
for (i = 1; i < argc; i++)
{
a = strtol(argv[1], NULL, 10);
b = strtol(argv[2], NULL, 10);
}
mult = a *b;
printf("%d\n", mult);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
