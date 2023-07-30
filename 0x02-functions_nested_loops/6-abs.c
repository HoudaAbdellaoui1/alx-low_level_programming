#include "main.h"

/**
 * _abs - checks for the sign of number
 * @n : integer parameter
 * Return: int
 */

int _abs(int n)
{
int val;
if (n < 0)
{
val = -n;
}
else
{
val = n;
}
return (val);
}
