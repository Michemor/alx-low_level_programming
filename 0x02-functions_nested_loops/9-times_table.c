#include "main.h"
/**
 * times_table - prints table 9
 */
void times_table(void)
{
int count = 0;
while (count <= 9)
{
int num = 0;
while (num <= 9)
{
int prod = count * num;
if (prod <= 9)
{
_putchar(prod + '0');
}
else
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
if (num != 9)
{
_putchar(',');
_putchar(' ');
}
num++;
}
_putchar('\n');
count++;
}
}

