#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - prints sum of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
int i;
unsigned int j;
int sum = 0;
char *let;
if (argc <= 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
let = argv[i];
j = 0;
while (j < strlen(let))
{
if (!(isdigit(let[j])))
{
printf("Error\n");
return (1);
}
j++;
}
sum += strtol(argv[i], NULL, 10);
}
printf("%d\n", sum);
}
return (0);
}
