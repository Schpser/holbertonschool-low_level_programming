#include "lists.h"

/**
 * free_dlistint - Free list
 * @head: Pointer to the first node of the list
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
