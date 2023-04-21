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

	if (n > 0)
	{
		va_start(args, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
