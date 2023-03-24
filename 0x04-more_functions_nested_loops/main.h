#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 * @c: is checked
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c);

/**
 * _isdigit - checks for digit characters
 * @c: is checked
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c);

/**
 * mul - multiplies two ints
 * @a: int
 * @b: int
 * Return: product
 */

int mul(int a, int b);

/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line
 */

void print_numbers(void);

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4,
 * followed by a new line
 */

void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the numbers from 0 to 14 followed by \n.
 */

void more_numbers(void);

/**
 * print_line - draws a straight line
 * @n: checked
 */

void print_line(int n);

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: intger
 */

void print_diagonal(int n);

/**
 * print_square - prints n squares followed by a new line n times * @size: integer
 */

void print_square(int size);

/**
 * print_triangle - prints a triangle
 * @size: intger size of triangle
 */

void print_triangle(int size);

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n);

#endif
