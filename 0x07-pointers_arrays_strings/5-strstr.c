#include "main.h"
#include <string.h>
/**
 * _strstr - searches for first occurence of substring in string
 * @haystack: string to be searched
 * @needle: string being searched for
 *
 * Return: pointer to beginning of located substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
char *hay = strstr(haystack, needle);
if (hay == NULL)
{
return (NULL);
}
return (hay);
}
