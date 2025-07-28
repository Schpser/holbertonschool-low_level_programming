#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

size_t print_list(const list_t *h);


/**
* struct list_s - Singly linked list
* @str: Char stocked in the node
* @len: Size of str
* @next: Pointer to the next node of the list
*/
typedef struct list_s
{
	char str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif /*LISTS_H*/
