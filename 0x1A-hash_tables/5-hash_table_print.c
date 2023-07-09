#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: hash table.
 *
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	if (!ht)
		return;

	node = ht->array[i];
	while (!node && (i < ht->size)) /* get the first not empty node */
		node = ht->array[i++];
	if (!node)
	{
		printf("{}\n");
		return;
	}
	printf("{'%s': '%s'", node->key, node->value);
	node = node->next;
	while (node)
	{
		printf(", '%s': '%s'", node->key, node->value);
		node = node->next;
	}
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		if (!node)
			continue;
		printf(", '%s': '%s'", node->key, node->value);
		node = node->next;
		while (node)
		{
			printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
