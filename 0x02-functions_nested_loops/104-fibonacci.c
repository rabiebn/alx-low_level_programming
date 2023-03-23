#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers starting with 1, 2
 *
 * Return: 0
 */

int main(void)
{
	int i;
	double a = 1;
	double b = 2;

	for (i = 0; i < 49; i++)
	{
		printf("%.0lf, %.0lf, ", a, b);
		a += b;
		b += a;
	}
	printf("\n");
	return (0);
}
