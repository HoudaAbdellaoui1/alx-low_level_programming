#include <stdarg.h>

/**
 * *sum_them_all - sum parameters
 * @n: the number of parameters
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum = 0, num;
unsigned int i = 0;
    
va_start(args, n);
if (n == 0)
{
va_end(args);
return 0;
}
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
sum += num;
}
va_end(args);
return (sum);
}
