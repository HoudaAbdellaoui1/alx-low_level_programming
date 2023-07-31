#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 * Return: 0 if exited properly, non-zero otherwise
 */

void more_numbers(void)
{
int i;
int j;

for (j = 1; j <= 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
_putchar('1');
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
