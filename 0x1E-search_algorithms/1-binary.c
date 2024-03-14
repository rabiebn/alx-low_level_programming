#include "search_algos.h"

/**
 * print_array - prints array
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the array -1
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	if (!array)
		return;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d, ", *(array + i));
	printf("%d\n", *(array + i));
}
/**
 * binary_search - searches for a value in an array of integers
 *                 using the Binary search algorithm
 *
 * @array: pointer to the first element of the sorted (asc) array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located,
 *         -1 if value not in array and/or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t high, low, mid;

	if (!array)
		return (-1);

	high = size - 1;
	low = 0;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		print_array((array + low), high - low);
		if (*(array + mid) == value)
			return (mid);

		if (*(array + mid) > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
