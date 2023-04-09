#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sum of positive numbers
 * @argc: len of argv
 * @argv: array of command line arguments
 * Return: 0 Success, 1 Failure
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (--argc)
	{
		for (i = 0; *(*(argv + argc) + i) != '\0' ; i++)
		{
			if (isdigit(*(*(argv + argc) + i)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(*(argv + argc));
	}
	printf("%d\n", sum);

	return (0);
}
