#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: pointer to head of list.
 *
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *curr = head, *next_node;

	while (curr)
	{
		next_node = curr->next;
		free(curr->str);
		free(curr);
		curr = next_node;
	}
}
