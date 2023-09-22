#include "main.h"

/**
 * _strcat - concatenate two strings,
 * @dest : string parameter
 * @src : string parameter
 * Return: string
 */

char *_strcat(char *dest, char *src) {
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return dest;
}