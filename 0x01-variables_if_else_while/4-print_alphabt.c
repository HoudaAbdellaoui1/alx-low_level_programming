#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the alphabet in lower case except q and e
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if(c != 'q' && c != 'e')
{
putchar(c);
}
} 
putchar('\n');
return (0);
}
