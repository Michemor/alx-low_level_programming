#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiploes two arguments passed to it
 * @argc: number of arguments passed
 * @argv: argument vector
 *
 * Return: 1
 */
int main(int argc, char **argv)
{
int i, a, b, mult = 1;
if (argc > 1 && argc < 4)
{
for (i = 0; i < argc; i++)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
}
mult = a * b;
printf("%d\n", mult);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
