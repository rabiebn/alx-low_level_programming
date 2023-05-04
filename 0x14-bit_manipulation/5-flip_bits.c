#include "main.h"

/**
 * flip_bits -  gets the number of bits to flip to get from one num to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to have n == m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int flip = 0;

	diff = n ^ m;
	while (diff > 0)
	{
		if (diff & 1)
			flip++;
		diff >>= 1;
	}
	return (flip);
}
