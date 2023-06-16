#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int out;
int in;
int inner;
for (out = 48; out <= 57; out++)
{
for (in = 49; in <= 56; in++)
{
for (inner = 50; inner <= 55; inner++)
{
putchar(out);
putchar(in);
putchar(inner);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
