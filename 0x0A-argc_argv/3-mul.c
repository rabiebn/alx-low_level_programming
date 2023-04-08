#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of two numbers
 * @argc: len of argv
 * @argv: array of command line arguments
 * Return: 0 Success, 1 Failure
 */

int main(int argc, char **argv)
{
	(void)argv;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(*(argv + 1)) * atoi(*(argv + 2))));

	return (0);
}
