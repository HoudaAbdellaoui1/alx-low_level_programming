#include "main.h"

/**
 * print_alphabet - print lower case alphabets (10 times) followed by a new line
 * Return: 0 if exited properly, non-zero otherwise
 */

void print_alphabet_x10(void)
{
char i;
int j;

for (j = 0; j <= 9 ; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
