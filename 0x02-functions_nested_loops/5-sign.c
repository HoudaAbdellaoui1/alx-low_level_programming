#include "main.h"

/**
 * print_sign - checks for the sign of number
 * @n : integer parameter
 * Return: 0 or 1 or -1
 */

int print_sign(int n)
{
int val;
if (n > 0)
{
_putchar('+');
val = 1;
}
else if (n == 0)
{
_putchar('0');
val = 0;
}
else if (n < 0)
{
_putchar('-');
val = -1;
}
return val;
}
