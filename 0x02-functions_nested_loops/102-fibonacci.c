#include "main.h"
#include <stdio.h>
#define MAX_FIB 50

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void printfonacci()
{
int f[MAX_FIB];
int i;

f[0] = 1;
f[1] = 2;
for (i = 2; i < MAX_FIB; i++)
{
f[i] = f[i - 1] + f[i - 2];
}
for (i = 0; i < MAX_FIB - 1; i++)
{
printf("%d, ", f[i]);
}
printf("%d\n", f[MAX_FIB - 1]);
}

int main()
{
printfonacci();
return 0;
}
