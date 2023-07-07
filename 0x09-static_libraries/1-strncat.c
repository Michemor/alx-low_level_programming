#include <string.h>
#include "main.h"
/**
 * _strncat - concatenates portion of src to dest
 * @dest: destination string
 * @src: source string
 * @n: length of src to be extracted
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
