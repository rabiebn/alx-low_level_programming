#include "hash_tables.h"

/**
 *  * print_ht - prints hash tables.
 *   * @ht: hash table.
 *    *
 *     * Return: void.
 *     */

void print_ht(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
	{
		perror("Malloc: yayks");
		return;
	}
	while (i < ht->size)
	{
		node = ht->array[i++];
		if (!node)
		{
			printf("%lu_  ---------\n", i);
			continue;
		}
		printf("%lu_  %s ---> %s\n", i, node->key, node->value);
		node = node->next;
		while(node)
		{
			printf("\t%s ---> %s\n", node->key, node->value);
			node = node->next;
		}
	}
}
