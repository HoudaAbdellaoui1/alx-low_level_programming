#include "main.h"

/**
 * print_diagonal - raws a diagonal line on the terminal,
 * @n : integer parameter
 * Return: 0 if exited properly, non-zero otherwise
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
