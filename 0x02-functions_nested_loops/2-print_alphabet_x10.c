#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabets followed by a new line x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
