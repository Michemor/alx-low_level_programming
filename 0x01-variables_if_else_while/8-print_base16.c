#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int hexNums = 48;
int hexLets = 97;
while (hexNums <= 57)
{
putchar(hexNums);
hexNums++;
}
while (hexLets <= 102)
{
putchar(hexLets);
hexLets++;
}
putchar('\n');
return (0);
}
