#include "main.h"
#include <string.h>
/**
 * _memcpy - copies n bytes of src into dest string
 * @dest: string to be copied to
 * @src: string to be copied from
 * @n: number of characters from src to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
