#include "lists.h"

/**
 * add_dnodeint - To add a node at the beginning of the list
 * @n: The int in the node
 * @head: Pointer to the first node of the list
 * Return: The list with the new nod, NULL if failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	int source_number = n;

	new_node = malloc(sizeof(dlistint_t));

	new_node->n = source_number;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
