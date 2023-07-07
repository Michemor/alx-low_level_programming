#include <string.h>
#include "main.h"
/**
 * _strncpy - copies src to dest
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: number of characters to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
} 
