#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array
 * @size: size if the array
 * @c: Value
 * Return:Success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
		return (arr);
}
