#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers starting with 1, 2
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long long a = 1;
	unsigned long long b = 2;

	for (i = 0; i < 49; i++)
	{
		printf("%llu, %llu, ", a, b);
		a += b;
		b += a;
	}
	printf("\n");
	return (0);
}
