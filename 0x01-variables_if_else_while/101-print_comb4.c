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
for (in = 49; in <= 57; in++)
{
for (inner = 50; inner <= 57; inner++)
{
if (out >= in || out >= inner || in >= inner)
{
continue;
}
else
{
putchar(out);
putchar(in);
putchar(inner);
}
if (out !=55 || in != 56 || inner != 57)
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
