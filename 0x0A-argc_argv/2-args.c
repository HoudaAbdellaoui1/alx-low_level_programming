#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array containing the arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
int i = 0;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

