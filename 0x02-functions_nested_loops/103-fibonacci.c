#include <stdio.h>

/**
 * main - prints the sum of even-valued fibonacci terms less than 4,000,000
 * Return: 0
 */

int main(void)
{
	double sum = 0;
	long a = 1;
	long b = 2;
	
	while (b < 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		if (b % 2 == 0)
			sum += b;
		a += b;
		b += a;
	}
	printf("%.0lf\n", sum);
	return (0);
}
