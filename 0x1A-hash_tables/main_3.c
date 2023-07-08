#include "hash_tables.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(10);
	hash_table_set(ht, "Jhon", "cool");
	hash_table_set(ht, "Ahmed", "cool");
	hash_table_set(ht, "Mamadou", "cool");
	hash_table_set(ht, "Aabdullahi", "cool");
	hash_table_set(ht, "Samir", "cool");
	hash_table_set(ht, "James", "Bond");
	hash_table_set(ht, "Carl", "cool");
	hash_table_set(ht, "Khadija", "cool");
	hash_table_set(ht, "yokyok", "cool");
	hash_table_set(ht, "hetairas", "cool");
	hash_table_set(ht, "mentioner", "cool");
	hash_table_set(ht, "James", "What???");
	hash_table_set(ht, "James", "Bond");
	hash_table_set(ht, "James", "Bond");


	print_ht(ht);
	return (EXIT_SUCCESS);
}
