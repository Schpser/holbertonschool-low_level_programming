#include "lists.h"

/**
 * dlistint_len - Print the number of elements of the list.
 * @h: Pointer to the head of the list.
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
