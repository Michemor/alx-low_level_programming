#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates n characters frim s2 to s1
 * @s1: first string
 * @s2: second string
 * @n: number of characters to be extracted
 *
 * Return: s3 or NULL 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
		n = 1;
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	s3 = malloc(sizeof(*s1) + n);
	if (s3 == NULL)
	{
		return (NULL);
	}
        strcat(s3, s1);
	strncat(s3, s2, n);
	return (s3);
}


