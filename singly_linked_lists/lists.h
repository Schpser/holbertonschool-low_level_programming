#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* struct list_s - Singly linked list
* @str: Char stocked in the node
* @len: Size of str
* @next: Pointer to the next node of the list
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void print_before_main(void);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
void free_list(list_t *head);

#endif /*LISTS_H*/
