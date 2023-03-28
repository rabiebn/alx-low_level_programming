#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 */

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != 0)
		counter++;
	counter--;

	while (counter >= 0)
	{
		_putchar(s[counter]);
		--counter;
	}
	_putchar('\n');
}
