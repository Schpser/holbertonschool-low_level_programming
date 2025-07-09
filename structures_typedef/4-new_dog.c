#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog (version sécurisée)
 * @name: Name of the dog (peut être NULL)
 * @age: Age of the dog
 * @owner: Owner of the dog (peut être NULL)
 * Return: Pointer to new dog, ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = malloc(sizeof(dog_t));

	if (!new_d)
		return (NULL);

	new_d->name = NULL;
	new_d->owner = NULL;
	new_d->age = age;

	if (name)
	{
		new_d->name = malloc(strlen(name) + 1);
		if (!new_d->name)
		{
			free(new_d);
			return (NULL);
		}
		strcpy(new_d->name, name);
	}

	if (owner)
	{
		new_d->owner = malloc(strlen(owner) + 1);
		if (!new_d->owner)
		{
			free(new_d->name);
			free(new_d);
			return (NULL);
		}
		strcpy(new_d->owner, owner);
	}

	return (new_d);
}
