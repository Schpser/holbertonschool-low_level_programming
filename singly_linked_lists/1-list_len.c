#include <stdio.h>
#include "lists.h"

/**
 * list_len - Print the number of elements of the list.
 * @h: Pointer to the head of the list.
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
