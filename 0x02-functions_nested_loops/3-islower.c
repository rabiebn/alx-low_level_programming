#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 if lowercase, 0 if upercase
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
