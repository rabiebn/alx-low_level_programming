#include <stdio.h>

/**
 *main - using putchar only, prints a to z both uppercase and lower case
 *
 *Return : Always 0 (Success)
 */

int main(void)
{
	char myChar;

	for (myChar = 'a'; myChar <= 'z'; ++myChar)
	{
		putchar(myChar);
	}
	for (myChar = 'A'; myChar <= 'Z'; ++myChar)
	{
		putchar(myChar);
	}
	putchar('\n');
	return (0);
}
