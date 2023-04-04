#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    * Return: On success 1.
 *     * On error, -1 is returned, and errno is set appropriately.
 *      */

int _putchar(char c);

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: character
 * @n: unsigned integer
 * Return: string s
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: array where src will be copied to
 * @src: pointer to memory area to be copied
 * @n: number of bytes to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: pointer to the first occurrence of c in s, NULL if the character is not found
 */

char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string to look for
 * Retrun: number of bytes in the initial segment of s which consist of bytes from accept
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string of set of bytes to look for in s
 * Return: pointer to the byte in s that matches one of accept bytes,
 * NULL if no match found
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring,
 * 0 if the substriing is not found
 */

char *_strstr(char *haystack, char *needle);

/**
 *  * print_chessboard - prints the chessboard
 *   * @a: 2D array
 *    */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of ints
 * @a: 2D array square matrix
 * @size: integer size of the square matrix
 */

void print_diagsums(int *a, int size);

/**
 *  * set_string - sets the value of a pointer to a char
 *   * @s: pointer to a pointer to a char
 *    * @to: pointer to a char
 */

void set_string(char **s, char *to);




#endif
