#include <stdio.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 * Return: A pointer to the result buffer (r) if the addition is successful,
 *         otherwise 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int i = 0;
int len1 = 0, len2 = 0;
int j = 0;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
if (len1 + len2 + 1 > size_r)
return 0;
len1--;
len2--;

while (len1 >= 0 || len2 >= 0 || carry > 0)
{
int digit1 = (len1 >= 0) ? n1[len1] - '0' : 0;
int digit2 = (len2 >= 0) ? n2[len2] - '0' : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[i] = (sum % 10) + '0';
i++;
len1--;
len2--;
}
r[i] = '\0';
i--;
while (j < i)
{
char temp = r[j];
r[j] = r[i];
r[i] = temp;
j++;
i--;
}
return r;
}

