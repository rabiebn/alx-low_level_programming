#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str : pointer to a string
 * Return: nothing
 */

void puts_half(char *str)
{
	int counter = 0;
	int n;
	int i;

	while (str[counter] != 0)
		counter++;

	if (counter % 2 == 0)
	{
		n = counter / 2;
		for (i = 0; i < n; i++)
			_putchar(str[n + i]);
	}
	else
	{
		n = (counter - 1) / 2;
		for (i = 1; i <= n; i++)
			_putchar(str[n + i]);
	}

	_putchar('\n');
}

