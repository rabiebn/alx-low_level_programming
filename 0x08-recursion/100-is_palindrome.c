#include "main.h"

/**
 * compare_char - compares characters
 * @firstChar: string
 * @lastChar: string
 * Return: 1 if palindrome, 0 if not
 */

int compare_char(char *firstChar, char *lastChar)
{
	if (firstChar >= lastChar)
		return (1);
	if (*firstChar == *lastChar)
		return (compare_char(firstChar + 1, lastChar - 1));
	return (0);
}

/**
 * _strlen - gets length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if string s is a palindrom, 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	return (compare_char(s, (s + len - 1)));
}
