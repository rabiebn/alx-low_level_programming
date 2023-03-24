#include "main.h"

/**
 * _isdigit - checks for digit characters
 * @c: is checked
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
