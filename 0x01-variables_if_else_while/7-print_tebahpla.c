#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lower case in reverse
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
