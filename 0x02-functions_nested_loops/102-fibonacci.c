#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void printfonacci(int n)
{
int f[n];

f[0] = 1;
f[1] = 2;
for (int i = 2; i < n; i++)
{
f[i] = f[i - 1] + f[i - 2];
}
for (int i = 0; i < n - 1; i++)
{
printf("%d, ", f[i]);
}
printf("%d\n", f[n - 1]);
}

int main()
{
int n = 50;
printfonacci(n);
return 0;
}
