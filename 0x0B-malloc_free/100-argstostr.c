#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - concatenates arguments passed to main
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
int i, j, k;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
else
{
str = malloc(sizeof(char *) * (ac + ac));
if (str == NULL)
{
return (NULL);
}
k = 0;
for(i = 0; av[i]; i++)
{
for (j = 0; av[i][j]; j++, k++)
{
*(str + k) = *(*(av + i) + j);
}
*(str + k) = '\n';
k++;
}
return (str);
}
free (str);
}
