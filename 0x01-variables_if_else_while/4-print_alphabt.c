#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int lower = 97;
int skipq = 113;
int skipe = 101;
while (lower <= 122)
{
if (lower != skipe || lower != skipq)
{
putchar(lower);
lower++;
}
}
putchar('\n');
return (0);
}
