#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: pointer to pointer to head.
 * @index: idx of node will be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	if (!head)
		return (-1);
	curr = *head;
	while (curr)
	{
		if (i == index)
		{
			if (curr->prev)/*check if it not head*/
				curr->prev->next = curr->next;
			else /*in case delete head*/
				*head = curr->next;
			if (curr->next)/*check if it not tail*/
				curr->next->prev = curr->prev;
			free(curr);
			return (1);
		}
		curr = curr->next;
		i++;
	}
	return (-1);
}
