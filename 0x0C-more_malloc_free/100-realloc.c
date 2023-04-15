#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of allocated space for ptr
 * @new_size: size of new memory block
 * Return: pointer to the reallocated memory,
 * NULL if ptr is NULL or if new_size==0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int min, i = 0;

	if (new_size == 0)
		return (NULL);

	if (new_size == old_size)
		return (ptr);
	else if (new_size > old_size)
		min = old_size;
	else
		min = new_size;

	p = malloc(sizeof(char) * new_size);
	if (p == NULL)
		return (NULL);

	if (ptr == NULL)
		return (p);

	for (i = 0; i < min; i++)
	{
		*((char *)p + i) = *((char *)ptr + i);
	}
	free(ptr);

	return (p);
}

