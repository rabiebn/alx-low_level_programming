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
	int t;
	int o;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (t = tens; t <= '9'; t++) /*print second of pair*/
			{
				for (o = ones + 1; o <= '9'; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);
					if (!((tens == '9' && ones == '8') &&
						(t == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
