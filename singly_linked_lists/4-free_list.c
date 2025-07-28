#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free list_t
 * @head: Pointer to the first node of the list
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
