#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lower case then in upper case
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
char c;
char d;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (d = 'A'; d <= 'Z'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
