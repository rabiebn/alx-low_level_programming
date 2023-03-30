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
 * _strcat - concatenates two strings
 * @src: string
 * @dest: string appended to
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int lenDest = _strlen(dest);

	while (i <= lenSrc - 1)
	{
		dest[lenDest + i] = src[i];
		i++;
	}
	return (dest);
}
