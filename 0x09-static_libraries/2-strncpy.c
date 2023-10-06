#include "main.h"

/**
 * _strncpy - Copies a string with a limited number of characters
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy from src
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, const char *src, int n)
{
int i = 0;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
