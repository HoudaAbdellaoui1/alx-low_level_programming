#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
#include <math.h>
/**
 * interpolation_search - searches for a value in an array of integers
 * using interpolation search algorithm
 * @array : 1st element of the array to search in
 * @size : array size
 * @value : searched value
 * Return: int : index of value
 */

int interpolation_search(int *array, size_t size, int value)
{
int high = size - 1;
int low = 0;

while(low <= high)
{
size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
printf("Value checked array[%ld] ", pos);
if (pos >= size)
{
printf(" is out of range\n");
break;
}
else
{
printf("= [%d]\n", array[pos]);
}
if(array[pos] == value)
{
return (pos);
}
else if(array[pos] < value)
low = pos + 1;
else if(array[pos] > value)
high = pos - 1;
}
return (-1);
}
