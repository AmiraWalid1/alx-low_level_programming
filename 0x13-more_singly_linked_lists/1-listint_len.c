#include "lists.h"
#include <stdio.h>
/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: pointer to the header of linked list.
 *
 * Return: the number of nodes.
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *curr = h;
	unsigned int len = 0;

	while (curr)
	{
		len++;
		curr = curr->next;
	}
	return (len);


}
