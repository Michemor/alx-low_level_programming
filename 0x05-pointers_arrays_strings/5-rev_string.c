#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
int i, temp;
int slen = strlen(s);
if (slen == 0)
{
_putchar(92);
}
else
{
for (i = 0; i < slen / 2; i++)
{
temp = s[i];
s[i] = s[slen-i-1];
s[slen-i-1] = temp;
}
}
}
