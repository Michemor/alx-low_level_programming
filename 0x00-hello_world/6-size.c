#include <stdio.h>
/**
 * main - prints size of datatypes
 *
 * Return : 0
 */
int main(void)
{ 
	printf("Size of char: %ld byte(s)\n",sizeof(char));
	printf("Size of int: %ld byte(s)\n",sizeof(int));
	printf("Size of long int: %ld byte(s)\n",sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n",sizeof(long long int));
	printf("Size of float: %zu byte(s)\n",sizeof(float));
	return (0);
}

