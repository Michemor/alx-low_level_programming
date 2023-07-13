#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_nconcat - concatenates n characters frim s2 to s1
 * @s1: first string
 * @s2: second string
 * @n: number of charcters to be extracted
 *
 * Return: pointer to new memory allocation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *s3;
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	s3 = malloc(sizeof(char) *(strlen(s1) + n));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
	s3[i] = s1[i];
	}
	strncat(s3, s2, n);
	return (s3);
}


