#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of parameters
 * Return: sum of parameters, 0 if n==0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int s = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		s += va_arg(args, int);

	va_end(args);
	return (s);
}
