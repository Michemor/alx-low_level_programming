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
int prod;
while (num <= 9)
{
prod = count * num;
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
if (count != 9)
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
