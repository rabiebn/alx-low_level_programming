#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str : pointer to a string
 * Return: nothing
 */

void puts2(char *str)
{
	int counter = 0;
	int i;

	while (str[counter] != 0)
		counter++;

	for (i = 0; str[i] != '\0' && i < counter; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

