#include "main.h"

/**
 * _islower - checks for lowercase character
 * Return: int(1 or 0)
 */

int _islower(int c)
{
if(c >= 'a' && c <= 'z')
{
return 0;
}
else
{
return 1;
}
}
