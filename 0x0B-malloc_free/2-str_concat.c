#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to a newly allocated string containing the concatenated
 *         strings, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
char *result;
unsigned int len1 = 0, len2 = 0;
unsigned int i = 0, j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (result == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
result[i + j] = s2[j];
}
result[i + j] = '\0';
return (result);
}
