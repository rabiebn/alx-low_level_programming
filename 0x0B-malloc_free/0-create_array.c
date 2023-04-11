#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates and initializes an array of char with a specific char
 * @size: size of array
 * @c: character to initialize with
 * Return: pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
