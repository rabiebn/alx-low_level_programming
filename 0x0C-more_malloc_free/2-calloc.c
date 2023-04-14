#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array set to zero
 * @nmemb: number of elements of the array
 * @size: size of elements
 * Return: pointer to the allocated memory,
 * NULL if malloc fails or if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		*((char *)ptr + i) = 0;
		i++;
	}

	return (ptr);
}
