#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Pointer to new dog, or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;
	size_t name_len, owner_len;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	name_len = strlen(name) + 1;
	name_copy = malloc(name_len);
	if (!name_copy)
	{
		free(d);
		return (NULL);
	}
	memcpy(name_copy, name, name_len);

	owner_len = strlen(owner) + 1;
	owner_copy = malloc(owner_len);
	if (!owner_copy)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}
	memcpy(owner_copy, owner, owner_len);

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;
	return (d);
}
