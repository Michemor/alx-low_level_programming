#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always  0 (Success)
 */
int main(void)
{
int num1 = 4;
float num2 = 4.5;
char home = 'a';
long long int num3 = 3.4;
long int num4 = 4.6;
printf("Size of a char: %ld byte(s)\n", sizeof(home));
printf("Size of an int: %ld byte(s)\n", sizeof(num1));
printf("Size of a long int: %ld byte(s)\n", sizeof(num4));
printf("Size of a long long int: %ld byte(s)\n", sizeof(num3));
printf("Size of a float: %ld byte(s)\n", sizeof(num2));
return (0);
}
