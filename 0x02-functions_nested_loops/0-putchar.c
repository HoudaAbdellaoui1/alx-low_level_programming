#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - print putchar followed by a new line
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
putchar('_');
putchar('p');
putchar('u');
putchar('t');
putchar('c');
putchar('h');
putchar('a');
putchar('r');
putchar('\n');
return (0);
}

int _putchar(char c)
{
    return write(1, &c, 1);
}
