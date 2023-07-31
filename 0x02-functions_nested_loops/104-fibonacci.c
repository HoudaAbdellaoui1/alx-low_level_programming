#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void printFibonacci(int n)
{
int fib1 = 1, fib2 = 2;

printf("%d, %d", fib1, fib2);
for (int i = 2; i < n; i++)
{
int nextFib = fib1 + fib2;
printf(", %d", nextFib);
fib1 = fib2;
fib2 = nextFib;
}
printf("\n");
}

int main(void)
{
int n = 98;
printFibonacci(n);
return 0;
}
