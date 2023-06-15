#include<unistd.h>
#include<string.h>
void errQuote(char[]);
/**
 * main - Entry point
 * 
 * Return: 1
 */
int main(void)
{
char quoteMsg[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
errQuote(quoteMsg[]);
return (1);
}

/**
 * errQuote - prints message to stderr
 * @quote: operand containing error message
 *
 */
void errQuote(char quote[])
{
write(2,quote[],strlen(quote[]));
}

