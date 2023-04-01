#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * _strlen - returns the length of a function
 * @s: pointer to a string
 * Return: length of the string
 */

int _strlen(char *s);

/**
 * _strcat - concatenates two strings
 * @src: string
 * @dest: string appended to
 * Returns: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings using atmost n bytes from src,
 * and src does not have to be null-terminated if it contains n or more bytes
 * @src: string
 * @dest: string appended to
 * @n: number of bytes in src
 * Returns: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies the string pointed to by src,
 * including the terminating null byte ('\0'), to the buffer pointed to by dest
 * @dest: string holding the copy
 * @src: string to copy
 * @n: number of src bytes
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: 0 if s1 and s2 are equal,
 * negative value if s1 is less than s2,
 * positive value if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverse integer array's elements
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - capitalize all letters in string
 * @s: string to manipulate
 * Return: string with all letters capitalized
 */

char *string_toupper(char *);

/**
 * cap_string - capitalize first letter of each word
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s);

/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s);

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: string in rot13
 */

char *rot13(char *s);

/**
 * print_number - prints an integer
 * @n: integer
 */

void print_number(int n);



#endif
