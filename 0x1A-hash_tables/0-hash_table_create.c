#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 *
 * @size: size of the array.
 * Return: a pointer to the hash table created.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	hash_node_t **array;

	if (!ht)
		return (NULL);

	array = malloc(sizeof(hash_node_t) * size);
	if (!array)
	{
		free(ht);
		return (NULL);
	}
	while (i <size)
	{
		array[i] = NULL;
		i++;
	}
	ht->size = size;
	ht->array = array;

	return (ht);
}
