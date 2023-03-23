#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers starting with 1, 2
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long a = 1;
	long b = 2;

	for (i = 0; i < 25; i++)
	{
		printf("%li, %li, ", a, b);
		a += b;
		b += a;
	}
	printf("\n");
	return (0);
}
