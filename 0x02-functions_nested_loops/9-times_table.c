#include "main.h"
/**
 * times_table - prints table 9
 */
void times_table(void)
{
int count, prod, num;
for (count = 0; count <= 9; count++)
{
for (num = 0; num <= 9; num++)
{
prod = count * num;
if (prod <= 9)
{
_putchar(prod + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
if (num != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}

