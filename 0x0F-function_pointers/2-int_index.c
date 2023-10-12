#include <stddef.h>

/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: an array of integers
 * @size: the number of elements in the array
 * @cmp: a pointer to the comparison function
 *
 * Return: the index of the first element for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
