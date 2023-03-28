#include "main.h"

/**
 * _strcpy - copies string
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	dest[0] = src[0];
	while (src[counter] != 0)
	{
		counter++;
		dest[counter] = src[counter];
	}
	return (dest);
}
