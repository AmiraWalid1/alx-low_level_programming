#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to pointer to the head of the list.
 *
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *deleted;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	deleted = *head;
	*head = (*head)->next;
	free(deleted);
	return (n);
}
