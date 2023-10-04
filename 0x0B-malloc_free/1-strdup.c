#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicate string.
 *         NULL if str is NULL or if memory allocation fails.
 */

char *_strdup(char *str)
{
char *duplicate;
unsigned int length, i;

if (str == NULL)
return (NULL);
length = strlen(str);
duplicate = (char *)malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}

