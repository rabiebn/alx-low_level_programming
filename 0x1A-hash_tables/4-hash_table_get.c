#include "hash_tables.h"

/**
 * hash_table_get - retreives a value coresponding to a key.
 * @ht: hash table.
 * @key: key.
 *
 * Return: value coresponding to a key, or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int idx;

	if (!ht)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key))
			tmp = tmp->next;
		else
			return (tmp->value);
	}

	return (NULL);
}
