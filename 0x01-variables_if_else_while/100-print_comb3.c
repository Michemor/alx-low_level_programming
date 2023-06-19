#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int out, in;
for (out = 48; out <= 56; out++)
{
for (in = 49; in <= 57; in++)
{
if (out > in || out == in)
{
continue;
}
else
{
putchar(out);
putchar(in);
if (out != 56 || in != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
