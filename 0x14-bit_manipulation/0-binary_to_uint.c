#include "main.h"

/**
 * _pow - raises to the power
 * @n: number
 * @p: power
 *
 * Return: unsigned int product of n to the power of p.
 */
unsigned int _pow(int n, unsigned int p)
{
	unsigned int r = 1;

	while (p)
	{
		r *= n;
		p--;
	}
	return (r);
}

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary number to convert
 *
 * Return: unsigned int in decimal, 0 if:
 *         there's at least one char that isn't 0 or 1;
 *         b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, p = 0, d = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);
	i--;
	while (i + 1)
	{
		d += _pow(2, p) * (b[i] - '0');
		p++;
		i--;
	}

	return (d);
}
