#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc and initializes it to 0
 * @nmemb: the number of elements in the array
 * @size: the size of each element
 * Return: a pointer to the allocated memory, or NULL if allocation fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
