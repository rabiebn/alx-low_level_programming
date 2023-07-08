#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table.
 * @key: key;
 * key cannot be an empty string.
 * @value: value associated with the key.
 *
 * Return: 1 if succedded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size = ht->size;
	hash_node_t *tmp, *new_node, **array;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!new_node->key || !new_node->value)
	{
		free(new_node);
		return (0);
	}
	index = key_index((unsigned char *)new_node->key, size);

	array = ht->array;
	tmp = array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, new_node->key) == 0)
		{
			tmp->value = new_node->value;
			return (1);
		}
		tmp = tmp->next;
	}
	if (!array[index])
	{
		new_node->next = NULL;
		array[index] = new_node;
		return (1);
	}

	new_node->next = array[index];
	array[index] = new_node;

	return (1);
}
