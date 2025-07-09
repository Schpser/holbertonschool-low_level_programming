#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: bytes
 * Return: a pointer to the allocated memory, or exit with status 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
