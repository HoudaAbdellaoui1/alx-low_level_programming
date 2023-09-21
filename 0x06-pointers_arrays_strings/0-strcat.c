#include "main.h"

/**
 * *_strcat - concatenate two strings,
 * @*dest : string parameter
 * @*src : string parameter
 * Return: string
 */

char *_strcat(char *dest, char *src) {
// Find the end of the dest string
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
// Copy characters from src to dest
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
// Null-terminate the concatenated string
*ptr = '\0';
return dest;
}