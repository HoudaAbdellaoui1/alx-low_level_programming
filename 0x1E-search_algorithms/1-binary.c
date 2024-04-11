#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
#include <math.h>
/**
 * binary_search - searches for a value in an array of integers
 * using binary search algorithm
 * @array : 1st element of the array to search in
 * @size : array size
 * @value : searched value
 * Return: int : index of value
 */

int binary_search(int *array, size_t size, int value)
{
size_t l = 0;
size_t r = size - 1;
size_t i;

if (array == NULL || size == 0)
{
return (-1);
}
else
{
while (l <= r)
{
size_t m = (l + r) / 2;
printf("Searching in array: ");
for (i = l; i <= r; i++)
{
printf("%d", array[i]);
if (i < r)
{
    printf(", ");
}
}
printf("\n");
if (array[m] < value)
{
l = m + 1;
}
else if (array[m] > value)
{
r = m - 1;
}
else if (array[m] == value)
{
return (m);
}
}
return (-1);
}
}
