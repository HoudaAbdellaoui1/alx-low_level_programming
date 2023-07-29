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

  srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
    {
      printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
      printf("%d is zero\n", n);
    }
    else
    {
      printf("%d is negative\n", n);
    }
    return (0);
}
