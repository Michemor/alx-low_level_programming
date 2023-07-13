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
	unsigned int i, len = n;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	i = 0;
	while (s1[i])
	{
		len++;
	}
	s3 = malloc(sizeof(char) * (len + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	len = 0;
        for (i = 0; s1[i]; i++)
	{
         s3[i] = s1[i];
	 len++;
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		s3[len] = s2[i];
		len++;
	}
	len = strlen(s3);
	s3[len] = '\0';
	return (s3);
}
