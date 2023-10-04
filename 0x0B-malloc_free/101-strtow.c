#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_whitespace - Check if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if c is a whitespace character, 0 otherwise.
 */

int is_whitespace(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Count the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
int count = 0;
int in_word = 0;

while (*str)
{
if (!is_whitespace(*str))
{
if (!in_word)
{
in_word = 1;
count++;
}
}
else
{
in_word = 0;
}
str++;
}
return count;
}

/**
 * strtow - Split a string into words based on spaces.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 *         The last element of the returned array is NULL.
 */

char **strtow(char *str)
{
int i = 0, j = 0;
char *start;
int word_length;
int num_words;

if (str == NULL || *str == '\0')
{
return (NULL);
}
num_words = count_words(str);
char **result = (char **)malloc((num_words + 1) * sizeof(char *));
if (result == NULL)
{
return (NULL);
}
while (*str)
{
while (is_whitespace(*str))
{
str++;
}
if (*str)
{
start = str;
while (*str && !is_whitespace(*str))
{
str++;
}
word_length = str - start;
result[i] = (char *)malloc((word_length + 1) * sizeof(char));
if (result[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(result[j]);
}
free(result);
return (NULL);
}
strncpy(result[i], start, word_length);
result[i][word_length] = '\0';
i++;
}
}
result[i] = NULL;
return (result);
}
