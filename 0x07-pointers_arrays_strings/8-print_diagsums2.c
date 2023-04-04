#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of ints
 * @a: 2D array square matrix
 * @size: integer size of the square matrix
 */

void print_diagsums(int a[][], int size)
{
	int i, j;
	unsigned int sum = 0;

	for (i = 0; i < size; i++)
		sum += a[i][i];
	printf("%u, ", sum);

	sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
			sum += a[i][j];
	}
	printf("%u\n", sum);
}
