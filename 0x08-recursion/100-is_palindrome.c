#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if given string is palindrome or not
 * @s: string to be checked
 *
 * Return: 1(if palindrome), 0 (if not palindrome)
 */
int is_palindrome(char *s)
{
int len = strlen(s);
int start = 0;
int end = len - 1;
if (len == 0)
{
return (1);
}
return (check_pal(s, start, end));
}
/**
 * check_pal - helps is_palindrome
 * @str: string to be checked
 * @left: index to start of string
 * @right: index to end of string
 *
 * Return: 1(if palindrome and 0 if not)
 */
int check_pal(char *str, int left, int right)
{
if (left >= right)
{
return (1);
}
else if (str[left] == str[right])
{
return (check_pal(str, left + 1, right - 1));
}
else
{
return (0);
}
}
