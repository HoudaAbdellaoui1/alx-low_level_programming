#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase in a string
 * @str: The input string to modify
 *
 * Return: A pointer to the modified string 'str'.
 */

char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
}
ptr++;
}
return (str);
}

