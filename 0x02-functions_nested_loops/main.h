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
 * print_alphabet - prints lowercase alphabets followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - print the alphabets in lowercase followed by a new line 10 times.
 *
 * Return: 0
 */

void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 if lowercase, 0 if upercase
 */

int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: is checked
 * Return: 1 if alphabet, 0 if otherwise
 */

int _isalpha(int c);

/**
 * print_sign - print the sign of number
 * @n: is checked
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n);

/**
 * _abs - print the absolute value
 * @n: is checked
 * Return: |n|
 */

int _abs(int n);

/**
 * print_last_digit - print the last digit
 * @n: is checked
 * Return: lastDigit
 */

int print_last_digit(int n);

/**
 * jack_bauer - print every minute of the day of Jack Baue, from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void);

/**
 * times_table - print times table from 0 to 9
 *
 * Return: void
 */

void times_table(void);



/**
 * add - adds two integers
 * @a: two integer arguments
 * @b: two integer arguments
 * Return: sum
 */
 
int add(int, int);

#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer argument
 */

void print_to_98(int);

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer argument
 */

void print_times_table(int n);

#endif
