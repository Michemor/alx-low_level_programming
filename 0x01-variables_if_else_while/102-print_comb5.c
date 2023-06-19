#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int out1, out2, in1, in2;
for (out1 = 49; out1 <= 57; out1++)
{
for (in1 = 49; in1 <= 57; in1++)
{
for (out2 = 49; out2 <= 57; out2++)
{
for (in2 = 48; in2 <=57; in2++)
{
if (in1 == in2 || out1 == out2)
{
continue;
}
else
{
putchar(out1);
putchar(in1);
putchar(' ');
putchar(out2);
putchar(in2);
if (out1 != 57 || in1 != 56 || out2 != 57 || in2 != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
