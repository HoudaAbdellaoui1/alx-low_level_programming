#include "main.h"

/**
 * leet - Encodes a string into "1337".
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int i = 0;
char leetMap[256] = {0};

leetMap['a'] = leetMap['A'] = '4';
leetMap['e'] = leetMap['E'] = '3';
leetMap['o'] = leetMap['O'] = '0';
leetMap['t'] = leetMap['T'] = '7';
leetMap['l'] = leetMap['L'] = '1';

for (i = 0; str[i] != '\0'; i++)
{
if (leetMap[str[i]] != 0)
{
str[i] = leetMap[str[i]];
}
}
return (str);
}
