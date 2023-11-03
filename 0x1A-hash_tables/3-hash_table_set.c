#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx_key;
	hash_node_t *new_node;

	idx_key = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = malloc((strlen(value) + 1) * sizeof(char));
	if (new_node->value == NULL)
		return (0);
	strcpy(new_node->value, value);

	if (ht->array[idx_key] == NULL)
	{
		new_node->next = NULL;
		ht->array[idx_key] = new_node;
	}
	else
	{
		new_node->next = ht->array[idx_key];
		ht->array[idx_key] = new_node;
	}
	return (1);
}
