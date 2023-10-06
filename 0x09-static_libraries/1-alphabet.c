#include "main.h"

/**
 * print_alphabet - print lower case alphabets followed by a new line
 * Return: 0 if exited properly, non-zero otherwise
 */

void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
