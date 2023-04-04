#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of ints
 * @a: 2D array square matrix
 * @size: integer size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i += size + 1)
		sum1 += a[i];

	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
