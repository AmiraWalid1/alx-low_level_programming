#include "lists.h"
#include <stdio.h>
/**
 * list_len - count the number of elements in a linked list_t list.
 * @h: pointer to head of list
 *
 * Return: the number of elements in a linked list_t list.
*/
size_t list_len(const list_t *h)
{
	const list_t *curr = h;
	size_t len = 0;

	while (curr)
	{
		len++;
		curr = curr->next;
	}
	return (len);
}

