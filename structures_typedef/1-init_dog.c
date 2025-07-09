#include "main.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to dog struct
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name ? strdup(name) : NULL;
	d->age = age;
	d->owner = owner ? strdup(owner) : NULL;
}
