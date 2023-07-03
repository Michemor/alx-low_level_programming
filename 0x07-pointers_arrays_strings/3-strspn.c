#include <string.h>
#include "main.h"
/**
 * _strspn - finds number of characters that matches pattern in accept to s
 * @s: target string
 * @accept: string containing pattern to be searched
 *
 * Return: number of characeters in s which consists of only characters contained in accept
 */
unsigned int _strspn(char *s, char *accept)
{
char *m;
for (m = s; *m != '\0'; m++)
{
if (strchr(accept, *m) == NULL)
return (m - s);
}
return (m - s);
}
