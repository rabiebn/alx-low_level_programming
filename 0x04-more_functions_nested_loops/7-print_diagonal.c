#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: intger
 */

void print_diagonal(int n)
{
	int i;
	int j = 1;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
