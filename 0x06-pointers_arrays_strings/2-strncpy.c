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
 * _strncpy - copies the string pointed to by src,
 * including the terminating null byte ('\0'), to the buffer pointed to by dest
 * @dest: string holding the copy
 * @src: string to copy
 * @n: number of src bytes
 * Return: copied string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
