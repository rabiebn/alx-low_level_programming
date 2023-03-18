#include <stdio.h>

/**
 *main - using putchar only, prints combinations of double-digit numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	int i;

	for (n = '0'; n <= '8'; ++n)
	{
		for (i = n + 1 ; i <= '9'; ++i)
		{
			putchar(n);
			putchar(i);
			if (n != '8' || i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
