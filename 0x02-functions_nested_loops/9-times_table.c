#include "main.h"

/**
 * times_table - print times table from 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product > 9)
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
			else
			{
				if (j == 0)
				{
					_putchar('0' + product);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + product);
				}
			}
			if (j == 9)
			{
				continue;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
