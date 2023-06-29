#include "main.h"
#include <string.h>
/**
 * leet - encodes string with certain numbers
 * @str - string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
int m, n;
int len = strlen(str);
char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char charEqui[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
for (m = 0; m < len; m++)
{
for (n = 0; n <= 9; n++)
{
if (str[m] == letters[n])
{
str[m] = charEqui[n];
}
}
}
return (str);
}

