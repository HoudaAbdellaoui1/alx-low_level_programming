#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;

for (i = 0; str[i] != '\0'; i++)
{
if (capitalize_next && isalpha(str[i]))
str[i] = toupper(str[i]);
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
capitalize_next = 1;
else
capitalize_next = 0;
}
return (str);
}
