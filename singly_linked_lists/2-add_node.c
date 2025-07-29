#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - To add a node at the beginning of the list
 * @str: The string, needs to be duplicated
 * @head: Pointer to the first node of the list
 * Return: The list with the new nod, NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int len = 0;

	dup_str = strdup(str);

	if (dup_str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
