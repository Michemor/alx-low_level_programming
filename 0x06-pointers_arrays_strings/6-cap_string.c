#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * cap_string - capitalizes string
 * @str: string to be capitalized
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
int i;
int len = strlen(str);
for (i = 0; i < len; i++)
{
if (i == 0)
{
if ((str[i]>= 'a') && (str[i] <= 'z'))
{
str[i] = toupper(str[i]);
continue;
}
}
if (str[i] == ' ' || str[i] == '!' || str[i] == '?' ||  str[i] == '.')
{
i++;
if((str[i] >= 'a') && (str[i] <= 'z'))
{
str[i] = toupper(str[i]);
continue;
}
}
if (str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' )
{
i++;
if ((str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = toupper(str[i]);
continue;
}
}
if (str[i] == ';' || str[i] == '\t' || str[i] == '\n' || str[i] == '"')
{
i++;
if ((str[i] >= 'a') && (str[i] <= 'z'))
{
str[i] = toupper(str[i]);
continue;
}
}
}
return (str);
}
