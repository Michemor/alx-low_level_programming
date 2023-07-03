#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches for any occurence of characters in accept from s
 * @s: target string to be scanned
 * @accept: matching characters
 *
 * Return: pointer to bytes in s that matches bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
char *search = strpbrk(s, accept);
return (search);
}
