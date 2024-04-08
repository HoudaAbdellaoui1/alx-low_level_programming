#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array : 1st element of the array to search in
 * @size : array size
 * @value : searched value
 * Return: int : index of value
 */

int linear_search(int *array, size_t size, int value)
{
    if (array == null)
    {
        return -1;
    }
    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            printf("Found %d at index: %d", value, i);
            return i;
        }
        printf("Value checked array[%zu] = [%d]\n", size, array[size]);
        printf("Found %d at index: -1\n", value);
        return -1;
    }
}
