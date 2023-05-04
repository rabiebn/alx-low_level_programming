#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to a number
 * @index: index of the bit to change
 *
 * Return: 1 if successful, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (!n || index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if (((*n >> index) & 1) == 0)
		return (1);

	mask = 1 << index;
	*n = *n ^ mask;
	return (1);
}
