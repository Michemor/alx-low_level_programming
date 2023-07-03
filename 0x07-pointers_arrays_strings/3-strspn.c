#include <string.h>
#include "main.h"
/**
 *_strspn - finds number of characters that matches pattern in accept to s
 *@s: target string
 *@accept: string containing pattern to be searched
 *
 *Return: interger value containing 1sr occurence of accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
int m = strspn(s, accept);
return (m);
}
