#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list.
 * @head: pointer to head of list.
 * @index: index of node that will return.
 *
 * Return: the nth node of a listint_t linked list.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int i = 0;

	while (curr)
	{
		if (i == index)
		{
			return (curr);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
