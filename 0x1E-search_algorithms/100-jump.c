#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located,
 *         -1 if array is NULL or value not present in array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array)
		return (-1);

	jump = sqrt(size);
	high = jump;
	low = 0;
	while (low < size)
	{
		printf("Value checked array[%lu] = [%d]\n", low, *(array + low));
		if (*(array + low) == value)
			return (low);
		else if (*(array + low) < value)
		{
			if (*(array + high) < value)
			{
				low = high;
				high = high + jump;
			}
			else
			{
				printf("Value found between indexes [%lu] and [%lu]\n", low, high);
				while (high >= low)
				{
					printf("Value checked array[%lu] = [%d]\n", low, *(array + low));
					if (*(array + low) == value)
						return (low);
					low++;
				}
				return (-1);
			}
		}
	}

	return (-1);
}
