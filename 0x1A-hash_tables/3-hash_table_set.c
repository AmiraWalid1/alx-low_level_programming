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
	hash_node_t *new_node, *curr;

	if (key == NULL || strlen(key) == 0)
		return (0);
	idx_key = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[idx_key];
	while (curr)
	{
		if (strcmp(strcmp(curr->key, (char *) key))
		{
			free(curr->value);
			curr->value =  _strdup((char *)value);
			if (curr->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		curr = curr->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = _strdup((char  *)key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = _strdup((char *)value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx_key];
	ht->array[idx_key] = new_node;
	return (1);
}
/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str: string will be duplicated
 * Return: pointer to a new string which is a duplicate of the string str.
*/
char *_strdup(char *str)
{
	char *new_str;

	new_str = malloc((strlen(str) + 1) * sizeof(str));
	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, str);
	return (new_str);
}
