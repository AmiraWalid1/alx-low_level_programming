#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer to head node.
 * @str: str of new node.
 *
 * Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *curr = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
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
