#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int lower = 97;
for (lower = 97; lower <= 122; lower++)
{
if (lower == 101 || lower == 113)
{
continue;
}
else
{
putchar(lower);
}
}
putchar('\n');
return (0);
}
