#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: is checked
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar('0' + lastDigit);

	return (lastDigit);
}
