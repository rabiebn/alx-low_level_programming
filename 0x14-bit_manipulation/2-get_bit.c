#include "main.h"

/**
 * get_bit - gets the bit in a given index
 * @n: number
 * @index: index
 *
 * Return: value at index, -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= (sizeof(long unsigned int) * 8))
		return (-1);

	if (n & mask)
		return (1);

	return (0);
}
