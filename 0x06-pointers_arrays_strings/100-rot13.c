#include <string.h>
#include "main.h"
/**
 * rot13 - encodes string according to rot13
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
int m, n;
int len = strlen(str);
char alphabet[]  = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
char alphaEqui[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z'};
for (m = 0; m < len; m++)
{
for (n = 0; n < 27; n++)
{
if (str[m] == alphabet[n])
{
str[m] = alphaEqui[n];
}
}
}
return (str);
}
