#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - t creates an array of chars, and initializes it
 * @size : unsigned integer parameter
 * @c : character parameter
 * Return: NULL or pointer
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i=0;

if (size == 0)
return NULL;
arr = (char *)malloc(size * sizeof(char));
if (arr == NULL)
return NULL;
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
