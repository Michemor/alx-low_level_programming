#include <stdio.h>
/**
 * main - prints the name of the file this program was compiled from
 *
 * Return: 0(program was successful)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
