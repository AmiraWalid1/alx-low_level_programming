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
	curr = *h;
	while (curr)
	{
		if (i == idx || (i + 1 == idx && curr->next == NULL))
			break;
		curr = curr->next;
		i++;
	}
	if (curr)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		if (i + 1 == idx && curr->next == NULL)
		{
			new_node->next = NULL;
			new_node->prev = curr;
			curr->next = new_node;
		}
		else
		{
			new_node->next = curr;
			new_node->prev = curr->prev;
			curr->prev = new_node;
			if (idx == 0)
				*h = new_node;
			else
				new_node->prev->next = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
