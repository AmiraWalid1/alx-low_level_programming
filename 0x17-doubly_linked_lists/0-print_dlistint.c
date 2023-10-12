#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: pointer to head of doubly linked list.
 *
 * Return: the number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t sz = 0;

	while (curr)
	{
		sz++;
		printf("%d\n", curr->n);
		curr = curr->next;
	}
	return (sz);
}
