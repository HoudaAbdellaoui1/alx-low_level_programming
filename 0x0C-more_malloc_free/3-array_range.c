#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The minimum value (included)
 * @max: The maximum value (included)
 *
 * Return: A pointer or NULL
 */

int *array_range(int min, int max)
{
int *arr;
int size, i = 0;

if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(size * sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}
