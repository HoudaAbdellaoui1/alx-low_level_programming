#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
/**
 * linear_search - searches for a value in an array of integers
 * @array : 1st element of the array to search in
 * @size : array size
 * @value : searched value
 * Return: int : index of value
 */

int linear_search(int *array, size_t size, int value)
{
unsigned int i = 0;

if (array == NULL)
return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%u] = [%d]\n", (unsigned int)i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
