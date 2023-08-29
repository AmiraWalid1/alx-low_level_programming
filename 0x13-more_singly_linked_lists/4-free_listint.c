#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of list.
 *
 * Return: void.
*/
void free_listint(listint_t *head)
{
	listint_t *freed;

	while (head)
	{
		freed = head;
		head = head->next;
		free(freed);
	}
}
