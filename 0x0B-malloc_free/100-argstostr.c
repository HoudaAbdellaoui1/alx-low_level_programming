#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenate all program arguments with newlines.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to a new string containing concatenated arguments,
 *         separated by newlines, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
char *result;
int total_length = 0, i, j, k = 0;

if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
total_length++;
}
total_length++;
}
result = (char *)malloc((total_length + 1) * sizeof(char));
if (result == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
result[k++] = av[i][j];
}
result[k++] = '\n';
}
result[k] = '\0';
return (result);
}

