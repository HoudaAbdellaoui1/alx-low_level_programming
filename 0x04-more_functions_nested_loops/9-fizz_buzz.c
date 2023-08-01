#include "main.h"
#include <stdio.h>

/**
 * main - prints a square, followed by a new line,
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
if (i != 100)
printf(" ");
else
printf("\n");
return (0);
}
}
