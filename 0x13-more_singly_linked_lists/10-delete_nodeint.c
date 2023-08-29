#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer to pointer to head of list.
 * @index: position of node will be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	curr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	while (curr)
	{
		if (i == index)
		{
			prev->next = curr->next;
			free(curr);
			return (1);
		}
		prev = curr;
		curr = curr->next;
		i++;
	}
	return (-1);
}
