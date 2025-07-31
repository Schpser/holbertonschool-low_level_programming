#include "lists.h"

/**
 * sum_dlistint - The sum of nodes in the list
 * @head: Pointer to the head of the list.
 * Return: The sum of the nodes, 0 if the list's empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
