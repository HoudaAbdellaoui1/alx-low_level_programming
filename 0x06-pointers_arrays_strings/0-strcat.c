#include "main.h"

/**
 * _strcat - concatenate two strings
 * 
 * @dest : pointer to destination input
 * @src :pointer to source input
 * 
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
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