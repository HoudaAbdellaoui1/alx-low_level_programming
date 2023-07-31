#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main()
{
int limit = 4000000;
int fib1 = 1, fib2 = 2;
int evenSum = 0;
int nextFib;

while (fib2 <= limit)
{
if (fib2 % 2 == 0)
{
evenSum += fib2;
}
nextFib = fib1 + fib2;
fib1 = fib2;
fib2 = nextFib;
}
printf("%d\n", evenSum);
return 0;
}
