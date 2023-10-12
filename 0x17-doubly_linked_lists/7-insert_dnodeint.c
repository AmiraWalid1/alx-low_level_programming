#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to pointer to head of list.
 * @idx: idx which new node will be inserted in it.
 * @n: n of new node.
 *
 * Return: : the address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *new_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	curr = *h;
	if (idx == 0)
	{
		new_node->next = curr;
		new_node->prev = NULL;
		if (curr)
			curr->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (curr)
	{
		if (i == idx - 1)
		{
			new_node->prev = curr;
			new_node->next = curr->next;
			curr->next = new_node;
			if (new_node->next)
				new_node->next->prev = new_node;
			return (new_node);
		}
		curr = curr->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
