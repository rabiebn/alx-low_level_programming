#include <unistd.h>

/**
 * _strlen - returns the length of a function
 * @s: pointer to a string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != 0)
		counter++;

	return (counter);
}
