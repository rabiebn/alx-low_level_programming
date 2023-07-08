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
	char *key_dup, *value_dup;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	key_dup = strdup(key);
	value_dup = strdup(value);
	if (!key_dup || !value_dup)
	{
		free(new_node);
		return (0);
	}
	index = key_index((unsigned char *)key_dup, size);

	array = ht->array;
	tmp = array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key_dup) == 0)
			return (0);
		tmp = tmp->next;
	}
	new_node->key = key_dup;
	new_node->value = value_dup;
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
