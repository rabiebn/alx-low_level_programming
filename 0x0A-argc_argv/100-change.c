#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the min number of coins to make a change for an amount of money
 * @argc: len of argv
 * @argv: array of strings passed in the command line
 * Return: 0 Success, 1 Failure
 */

int main(int argc, char **argv)
{
	int cents, i, numCoins = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(*(argv + 1));
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			while (cents >= coins[i] &&
					(cents - coins[i]) >= 0)
			{
				cents -= coins[i];
				numCoins++;
			}
		}
	}
	printf("%d\n", numCoins);

	return (0);
}

