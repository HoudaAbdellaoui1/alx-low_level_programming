#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 * Return: A pointer to the encoded string.
 */
 
char *rot13(char *str)
{
int i = 0;

for (i = 0; str[i] != '\0'; i++)
{
char c = str[i];
if (c >= 'A' && c <= 'Z')
{
str[i] = (((c - 'A') + 13) % 26) + 'A';
}
else if (c >= 'a' && c <= 'z')
{
str[i] = (((c - 'a') + 13) % 26) + 'a';
}
}
return (str);
}
