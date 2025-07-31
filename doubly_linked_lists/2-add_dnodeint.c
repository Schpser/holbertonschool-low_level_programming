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

	new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
    
	if (*head == NULL)
    {
        new_node->n = NULL;
        *head = new_node;
        return (new_node);
    }

	return (new_node);
}
