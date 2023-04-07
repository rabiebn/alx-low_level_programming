#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 */

void print_number(int n)
{
	unsigned int tens, digit, intPos = n;
	double digitNum = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			intPos = n * -1;
			_putchar('-');
		}
		while (digitNum <= intPos)
			digitNum *= 10;
		tens = digitNum / 10;

		while (tens >= 1)
		{
			digit = intPos / tens;
			_putchar(digit + '0');
			intPos = (intPos - (tens * digit));
			tens /= 10;
		}
	}
}
