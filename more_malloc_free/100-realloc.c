#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 * Description: If new_size is equal to old_size, then it returns ptr.
 * If new_size is zero and ptr is not NULL, then it frees ptr and returns
 * NULL. If ptr is NULL, then it behaves like malloc for new_size.
 * If new_size is greater than old_size, it allocates a new memory block,
 * copies the contents of the old memory block to the new one, frees the old
 * memory block, and returns a pointer to the new memory block.
 * If new_size is less than old_size, it allocates a new memory block,
 * copies the contents of the old memory block to the new one up to the
 * smaller of the two sizes, frees the old memory block, and returns a pointer
 * to the new memory block.
 * If the allocation fails, it returns NULL.
 * Return: pointer to the newly allocated memory block, or NULL if it fails.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}

