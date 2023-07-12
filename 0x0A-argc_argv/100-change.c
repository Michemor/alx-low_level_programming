#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints change for given amount passed as argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1(if an error occurs) or 0
 */
int main(int argc, char **argv)
{
int cents = 0, minCoins= 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
}
else if (cents >= 10)
{
cents -= 10;
}
else if (cents >= 5)
{
cents -= 5;
}
else if (cents >= 2)
{
cents -= 2;
}
else if (cents >= 1)
{
cents -= 1;
}
minCoins++;
}
printf("%d\n", minCoins);
return (0);
}
