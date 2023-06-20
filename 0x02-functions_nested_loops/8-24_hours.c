#include "main.h"
/**
 * jack_bauer - prints hours and minutes
 */
void jack_bauer(void)
{
int hour = 0;
while (hour <= 23)
{
int min = 0;
while (min <= 59)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
min++;
}
hour++;
}
}
