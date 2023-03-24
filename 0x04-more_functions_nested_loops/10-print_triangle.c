#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: intger size of triangle
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= size; ++j)
			{
				while (j <= size - i)
				{
					_putchar(' ');
					++j;
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
