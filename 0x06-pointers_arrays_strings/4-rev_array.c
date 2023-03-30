#include "main.h"

/**
 * reverse_array - reverse integer array's elements
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int tmp, start = 0;
	int finnish = n - 1;

	while (start < finnish)
	{
		tmp = *(a + start);
		*(a + start) = *(a + finnish);
		*(a + finnish) = tmp;
		start++, finnish--;
	}
}
