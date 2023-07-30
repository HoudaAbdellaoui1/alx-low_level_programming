#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the sign of a given number
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int n;
int last_digit;


srand(time(0));
n = rand() - RAND_MAX / 2;

last_digit = abs(n % 10);

if (n < 0)
{
printf("Last digit of %d is -%d ", n, last_digit);
}
else
{
printf("Last digit of %d is %d ", n, last_digit);
}
if (last_digit > 5 && n < 0)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else if ((last_digit < 6 && last_digit > 0) || n < 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
