#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints "a[2] = 98" followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
*(int *)((char *)&p + 20) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
