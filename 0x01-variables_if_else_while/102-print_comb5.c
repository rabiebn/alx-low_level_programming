#include <stdio.h>

/**
 *main - using putchar only, prints a num pair from 00-99 without repeats
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens < 100; tens++)
	{
		for (ones = 0; ones < 100; ones++)
		{
			if (n < m)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				if (n != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
