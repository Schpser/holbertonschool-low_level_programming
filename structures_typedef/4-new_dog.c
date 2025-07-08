#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d = malloc(sizeof(dog_t));
    
    if (!d)
        return (NULL);
    
    d->name = strdup(name);
    if (!d->name) {
        free(d);
        return (NULL);
    }
    
    d->owner = strdup(owner);
    if (!d->owner) {
        free(d->name);
        free(d);
        return (NULL);
    }
    
    d->age = age;
    return (d);
}