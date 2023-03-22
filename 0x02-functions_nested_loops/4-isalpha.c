#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is checked
 * Return: 1 if alphabet, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
