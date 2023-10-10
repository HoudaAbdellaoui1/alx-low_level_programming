#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints the attributes of a struct dog
 * @d: Pointer to the struct dog to print
 * 
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.2f years\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}