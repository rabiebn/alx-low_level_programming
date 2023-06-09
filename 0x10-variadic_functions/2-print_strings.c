#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string separating between arguments
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 1; i <= n; i++)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
