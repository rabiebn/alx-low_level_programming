#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, n_copy;
	int num_len = 0;

	n_copy = n;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		num_len++;
		n >>= 1;
	}
	num_len--;
	mask <<= num_len;

	while (mask > 0)
	{
		if (n_copy & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
