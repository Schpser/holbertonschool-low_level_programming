#include "lists.h"

/**
 * get_dnodeint_at_index - Function that  returns the nth node of a list
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve (starting from 0).
 * Return: nth of the node, NULL if it does'nt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;

	}

	return (NULL);
}
