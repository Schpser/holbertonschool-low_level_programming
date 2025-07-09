#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libère un dog_t
 * @d: Pointeur vers le dog à libérer
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}