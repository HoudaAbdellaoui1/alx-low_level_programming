#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: integer parameter
 * Return: 0 if exited properly, non-zero otherwise
 */

void print_triangle(int size)
{
int i,j;

if (size <= 0)
_putchar('\n');
else
for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
