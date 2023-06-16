#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int out = 48;
int in = 48;
while(out <= 57)
{
while (in <= 57)
{
putchar(out);
putchar(in);
putchar(',');
putchar(' ');
in++;
}
out++;
}
putchar('\n');
return (0);
}
