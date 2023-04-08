#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program's name
 * @argc: len of argv
 * @argv: array of command line arguments
 * Return: 0 Success
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", (argc - 1));
	return (0);
}
