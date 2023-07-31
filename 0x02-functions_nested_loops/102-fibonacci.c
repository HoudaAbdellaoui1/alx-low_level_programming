#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void printFibonacci(int n)
{
int fib[n];

fib[0] = 1;
fib[1] = 2;
for (int i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}
for (int i = 0; i < n - 1; i++)
{
printf("%d, ", fib[i]);
}
printf("%d\n", fib[n - 1]);
}

int main()
{
int n = 50;
printFibonacci(n);
return 0;
}
