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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
