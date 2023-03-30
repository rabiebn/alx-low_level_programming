#include "main.h"

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

/**
 * _strncat - concatenates two strings using atmost n bytes from src,
 * and src does not have to be null-terminated if it contains n or more bytes
 * @src: string
 * @dest: string appended to
 * @n: number of bytes in src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lenDest = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[lenDest + i] = src[i];
	dest[lenDest + i] = '\0';

	return (dest);
}
