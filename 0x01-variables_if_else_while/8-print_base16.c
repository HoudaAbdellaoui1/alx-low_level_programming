#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all numbers of base 16
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
char i;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
