#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Function that displays a dog's name, age, owner or (nil)
 * @d: Pointer of the structure
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{}
else
{
	printf("Name: %s\n", (d->name ? d->name : "(nil)"));
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));
}
}
