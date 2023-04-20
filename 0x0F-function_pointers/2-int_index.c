#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array where the searche accures
 * @size: number of elements of array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which cmp function does not return 0,
 * if no element matches returns -1,
 * if size <= 0 returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
