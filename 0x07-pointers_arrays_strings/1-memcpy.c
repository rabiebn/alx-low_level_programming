#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: array where src will be copied to
 * @src: pointer to memory area to be copied
 * @n: number of bytes to copy
 * Return: string dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
