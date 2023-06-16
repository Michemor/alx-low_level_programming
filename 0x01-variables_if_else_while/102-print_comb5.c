#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int out1 = 48;
int out2 = 48;
int in1 = 48;
int in2 = 49;
while (out1 <= 57)
{
while (in1 <= out1)
{
putchar(out1);
putchar(in1);
putchar(' ');
in1++;
}
out1++;
}
while (out2 <= 57)
{
while (in2 <= out2)
{
putchar(out2);
putchar(in2);
putchar(',');
in2++;
}
out2++;
}
putchar('\n');
return (0);
}


