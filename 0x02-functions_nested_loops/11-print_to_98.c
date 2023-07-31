#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: integer param
 * Return: 0 if exited properly, non-zero otherwise
 */

void print_to_98(int n)
{
int i;

for (i=n; i <= 98; i++)
{
while (i != 98)
{
printf("%d, ", i);
}
printf("%d", i);
}
}
