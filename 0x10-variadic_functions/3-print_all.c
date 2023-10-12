#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on format.
 * @format: list of types of arguments to be printed
 *
 * 'c' for char, 'i' for integer, 'f' for float, 's' for string (char*)
 * If string is NULL, it prints (nil). Any other char is ignored.
 */

void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str, *separator = "";	
va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
break;
}
separator = ", ";
i++;
}
printf("\n");
va_end(args);
}
