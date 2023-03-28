#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers followed by \n
 * @n: is the number of elements of the array to be printed
 * @a: array of integers
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter <= n - 1; counter++)
	{
		if (counter == n - 1)
			printf("%d", a[counter]);
		else
			printf("%d, ", a[counter]);
	}
	printf("\n");
}
