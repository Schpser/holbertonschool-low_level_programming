#include "lists.h"
/**
*add_node_end - Add a new node at the end
*@head: Pointer to the first node
*@str: Pointer to a string
*Return: The list with the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temporary;
	char *duplicate_str;
	unsigned int len = 0;

	while (str[len])
	len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
	return (NULL);
	}
	duplicate_str = strdup(str);

	if (duplicate_str == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->str = duplicate_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temporary = *head;
		while (temporary->next != NULL)
		{
			temporary = temporary->next;
		}
			temporary->next = new_node;
	}
	return (new_node);
}
