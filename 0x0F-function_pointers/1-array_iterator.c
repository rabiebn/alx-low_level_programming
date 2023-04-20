#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - exectutes a function on each element of an array
 * @action: pointer to the function to be exucted
 * @array: array of elements to execute action on
 * @size: size of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
