#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers (or NULL)
 * @n: the number of integers passed to the function
 *
 * If separator is NULL, don't print it.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
int num = va_arg(args, int);
printf("%d", num);
if (i < n - 1 && separator)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
