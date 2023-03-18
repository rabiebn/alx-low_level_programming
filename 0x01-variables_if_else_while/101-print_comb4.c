#include <stdio.h>

/**
 *main - using putchar only, prints combinations of triple-digit numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int i;
	int j;

	for (n = '0'; n <= '7'; ++n)
	{
		for (i = n + 1 ; i <= '8'; ++i)
		{
			for (j = i + 1 ; j <= '9'; ++j)
			{
				putchar(n);
				putchar(i);
				putchar(j);
				if (n != '7' || i != '8' || j != '9')
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
