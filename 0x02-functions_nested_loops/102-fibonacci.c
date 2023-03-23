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

	printf("%li, %li", a, b);
	for (i = 0; i < 25; i++)
	{
		a += b;
		b += a;
		printf(", %li, %li", a, b);
	}
	printf("\n");
	return (0);
}
