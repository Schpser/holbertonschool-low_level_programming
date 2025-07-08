#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Display a dog's age, name and owner
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Description: This structure defines a dog with its name, age, and owner.
 * @my_dog.name: Name of the dog
 * @my_dog.age: Age of the dog
 * @my_dog.owner: Owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);

#endif
