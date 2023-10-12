#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: pointer to head of doubly linked list.
 *
 * Return: the number of elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t sz = 0;

	while (curr)
	{
		sz++;
		curr = curr->next;
	}
	return (sz);
}
