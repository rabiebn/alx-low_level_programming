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
			if (tens < ones)
			{
				putchar((tens / 10) + 48);
				putchar((tens % 10) + 48);
				putchar(' ');
				putchar((ones / 10) + 48);
				putchar((ones % 10) + 48);
				if (tens != 98 || ones != 99)
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
