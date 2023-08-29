#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to head of list.
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
*/
int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
