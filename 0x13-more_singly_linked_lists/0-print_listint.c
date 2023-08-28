#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * and  the number of nodes.
 * @h: pointer to the header of linked list.
 * 
 * Return: the number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *curr = h;
	unsigned int len = 0;

	while (curr)
	{
		len++;
		printf("%d\n", curr->n);
		curr = curr->next;
	}
	return (len);


}
