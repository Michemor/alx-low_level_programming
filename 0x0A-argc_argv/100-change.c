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
int i, cents, coins, change;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
for (i = 0; i < argc; i++)
{
coins = atoi(argv[1]);
}
if (coins <= 0)
{
printf("0\n");
}
if (coins == 1)
{
cents = 1;
change = coins / cents;
printf("%d\n", change);
}
else if (coins >= 2 && coins <= 5)
{
cents = 2;
change = coins / cents;
printf("%d\n", change);
}
else if (coins >= 6 && coins <= 9)
{
cents = 5;
change = coins / cents;
printf("%d\n", change);
}
else if (coins >= 10 || coins  <= 99)
{
cents = 10;
change = coins / cents;
printf("%d\n", change);
}
else
{
cents = 25;
change = coins / cents;
printf("%d\n", change);
}
}
return (0);
}
