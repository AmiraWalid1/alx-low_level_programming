#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table.
 * Return: void.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *curr;
	int check = 0;

	if (ht == NULL || ht->size == 0)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (idx = 0 ; idx < ht->size ; idx++)
	{
		curr = ht->array[idx];
		while (curr != NULL)
		{
			if (check)
				printf(", ");
			else
				check = 1;
			printf("'%s': '%s'if(!check)", curr->key, curr->value);
			curr = curr->next;
		}
	}
	printf("}\n");
}
