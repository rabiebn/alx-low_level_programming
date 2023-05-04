#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int x = 0x123456;
	int *e;

	e = &x;
	if ((*e & 0x56) == 0x56)
		return (1);

	return (0);
}
