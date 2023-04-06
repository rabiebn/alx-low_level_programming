#include "main.h"

/**
 * find_divider - finds a divider for n
 * @n: integer
 * @div: integer < n
 * Return: 0 if n < 0, else div
 */

int find_divider(int n, int div)
{
	if (n < 1)
		return (0);

	if (div > 0 && n % div != 0)
		return (find_divider(n, div - 1));

	return (div);
}

/**
 * is_prime_number - finds out if a number is a prime number
 * @n: integer
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (find_divider(n, n - 1) == 1)
		return (1);

	return (0);
}
