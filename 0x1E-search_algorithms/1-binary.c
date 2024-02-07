#include "search_algos.h"

/**
 * print_array - prints an array
 *
 * @array: array to print;
 * @size: number of elements in array.
 */
void print_array(int *array, size_t size)
{
	size_t i;

	if (!array)
		return;
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d, ", *(array + i));
	}
	printf("%d\n", *(array + i));
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using binary search algorithm.
 *
 * @array: pointer to the first element of the array to search in,
 *         (sorted in ascending order and no duplicats);
 * @size: number of elements in array;
 * @value: value to search for.
 * Return: index where value is located,
 *         -1 if value not present in array or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	while (high >= low)
	{
		print_array(array + low, high - low);
		mid = (low + high) / 2;
		if (*(array + mid) == value)
			return (mid);
		else if (*(array + mid) < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
