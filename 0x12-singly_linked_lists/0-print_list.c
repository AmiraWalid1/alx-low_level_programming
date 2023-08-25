#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to head of list
 *
 * Return: the number of nodes.
*/
size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t len = 0;

	while (curr)
	{
		if (curr->str)
		{
			printf("[%u] %s\n", curr->len, curr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		len++;
		curr = curr->next;
	}
	return (len);
}

