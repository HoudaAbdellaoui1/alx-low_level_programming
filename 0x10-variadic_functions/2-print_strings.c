#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings (or NULL)
 * @n: the number of strings passed to the function
 *
 * If separator is NULL, don't print it. If a string is NULL, print (nil).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;

va_start(args, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (i < n - 1 && separator)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
