#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index of the bit to change to one
 *
 * Return: 1 if worked succefully, -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (!n || index >= (sizeof(long unsigned int) * 8))
		return (-1);

	*n = *n | mask;
	return (1);
}
