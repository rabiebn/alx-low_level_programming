#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: is checked
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
