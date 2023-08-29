#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - frees a listint_t list
 * and sets the head to NULL.
 * @head: pointer to pointer to the head of list.
 *
 * Return: void.
*/
void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		freed = *head;
		*head = (*head)->next;
		free(freed);
	}
}
