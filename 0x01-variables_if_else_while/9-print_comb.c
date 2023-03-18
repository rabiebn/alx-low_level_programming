#include <stdio.h>

/**
 *main - using putchar only, prints combinations of single-digit numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9') /*print 0 to 9 with comma and space between digits*/
	{
		putchar(n);
		if (n == '9')
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
