#include "main.h"

/**
 * _strncat - Concatenates two strings with a limited number of bytes
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to concatenate from src
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, const char *src, int n)
{
char *dest_end = dest;

while (*dest_end != '\0')
{
dest_end++;
}
while (*src != '\0' && n > 0)
{
*dest_end = *src;
dest_end++;
src++;
n--;
}
*dest_end = '\0';
return (dest);
}
