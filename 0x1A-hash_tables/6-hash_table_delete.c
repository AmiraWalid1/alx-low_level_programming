#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table.
 * Return: void.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *curr, *deleted;

	if (ht == NULL)
		return;
	for (idx = 0 ; idx < ht->size ; idx++)
	{
		curr = ht->array[idx];
		while (curr != NULL)
		{
			deleted = curr;
			curr = curr->next;
			free(deleted->key);
			free(deleted->value);
			free(deleted);
		}
	}
	free(ht->array);
	free(ht);
}
