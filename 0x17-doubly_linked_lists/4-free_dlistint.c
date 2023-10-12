#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of list.
 *
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *deleted;

	while (head)
	{
		deleted = head;
		head = head->next;
		free(deleted);
	}
}
