#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: hash table.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *next;
	unsigned long int i = 0;

	if (!ht)
		return;

	if (!ht->array)
	{
		free(ht);
		return;
	}

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			node->key = NULL;
			node->value = NULL;
			free(node);
			node = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
