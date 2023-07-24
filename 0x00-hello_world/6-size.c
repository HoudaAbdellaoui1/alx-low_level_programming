#include <stdio.h>
/*
* main - prints the size of various types on the computer 
* Return - 0 
*/ 
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
printf("Size of a double: %zu byte(s)\n", sizeof(double));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long double: %zu byte(s)\n", sizeof(long double));
return (0);
}
