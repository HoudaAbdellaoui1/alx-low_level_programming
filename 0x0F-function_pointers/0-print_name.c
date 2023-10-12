#include <stdio.h>

/**
 * print_name - prints a name
 * @name: a pointer to a name string
 * @f: a function pointer that takes a char* and returns void
 */
 
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
