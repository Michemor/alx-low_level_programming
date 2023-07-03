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
char alphabet[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char alphaEqui[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
for (m = 0; str[m] != '\0'; m++)
{
for (n = 0; n < 53; n++)
{
if (str[m] == alphabet[n])
{
str[m] = alphaEqui[n];
}
}
}
return (str);
}
