#include "main.h"
/**
 * get_root - calculates square root of n
 * @n: integer
 * @root: integer
 * Return: -1 if n is not a square, else natural square root of n
 */

int get_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (get_root(n, root + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: integer
 * Return: -1 if n does not have a square root, else natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (get_root(n, 0));
}
