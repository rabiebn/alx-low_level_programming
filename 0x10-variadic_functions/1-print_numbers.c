#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL || n == 0)
		return;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(args, int), separator);
	printf("%d\n", va_arg(args, int));
}
