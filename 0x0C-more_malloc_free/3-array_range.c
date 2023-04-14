#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of ordered integers from min to max
 * @min: min integer of the array
 * @max: max integer of the array
 * Return: pointer to the created array, NULL if malloc fails or min > max
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= (max - min + 1); i++)
		*(p + i) = min++;

	return (p);
}
