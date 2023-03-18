#include <stdio.h>

/**
 * main - using putchar only, prints a to z both uppercase and lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
