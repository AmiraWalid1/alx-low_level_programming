#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to the head of list.
 * @n: integer.
 *
 * Return:  the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *curr = *head;

	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (curr->next)
	{
		curr = curr->next;
	}
	curr->next = new_node;
	return (new_node);
}
