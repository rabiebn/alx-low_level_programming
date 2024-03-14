#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 *
 * @array: pointer to the first element of the sorted (asc) array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located,
 *         -1 if value not in array and/or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i = 0;

	if (!array)
		return (-1);

	step = sqrt(size);
	prev = 0;
	while (*(array + step) < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
				step, *(array + step));
		prev = step;
		step += sqrt(size);
		if (prev >= (size - 1))
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (prev + i <= step)
	{
		printf("Value checked array[%lu] = [%d]\n",
				prev + i, *(array + prev + i));
		if (*(array + prev + i) == value)
			return (prev + i);
		i++;
	}

	return (-1);
}
