#include "main.h"

/**
 * print_binary - prints the binary equivalent of a given decimal number
 * @n: decimal to be converted to binary
 *
 */
void print_binary(unsigned long int n)
{
        char bit_n;

        if (n > 1)
                print_binary(n >> 1);

        bit_n = n & 1;
        _putchar(bit_n + '0');

}
~    
