#include "main.h"
#include <string.h>
/**
 * _strchr - finds chaaracter c in given string 
 * @s: string to be scanned
 * @c: character to be searched for
 *
 * Return: pointer to first occurence of c , if not returns NULL
 */
char *_strchr(char *s, char c)
{
char *m = strchr( s, c);
return (m);
}
