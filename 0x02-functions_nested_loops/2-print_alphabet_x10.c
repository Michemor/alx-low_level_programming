#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
int counter = 0;
while (counter <= 9)
{
int m = 97;
while (m <= 122)
{
_putchar(m);
m++;
}
counter++;
_putchar('\n');
}
}
