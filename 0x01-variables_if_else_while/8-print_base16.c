#include <stdio.h>

/**
 *main - using putchar only, prints base16 0123456789abcdef
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int h = '0';
	char af = 'a';

	while (h <= '9') /*print 0 to 9*/
	{
		putchar(h);
		h++;
	}
	while (af <= 'f') /*print a to f*/
	{
		putchar(af);
		af++;
	}
	putchar('\n');
	return (0);
}
