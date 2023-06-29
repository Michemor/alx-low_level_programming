#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * string_toupper - converts lowercase letters to uppercase
 * @let: string
 *
 * Returns: string with characters in uppercase
 */
char *string_toupper(char *let)
{
int i;
int len = strlen(let);
for (i = 0; i < len; i++)
{
let[i] = toupper(let[i]);
}
 return (let);
}
