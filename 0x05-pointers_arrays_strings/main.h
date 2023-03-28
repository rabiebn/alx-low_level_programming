#ifndef _MAIN_H_
#define _MAIN_H_

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _putchar(char c);

/**
 *  reset_to_98 - resets the value to 98
 * @n: pointer to an int
 * Return: nothing
 */

void reset_to_98(int *n);

/**
 *  * swap_int - swaps the values of two integers
 *   * @a: pointer to an int
 *    * @b: pointer to an int
 *     * Returns: Nothing
 *      */

void swap_int(int *a, int *b);

/**
 *  * _strlen - returns the length of a function
 *   * @s: pointer to a string
 *    * Return: length of the string
 *     */

int _strlen(char *s);

/**
 *  * _puts - prints a string, followed by a new line, to stdout
 *   * @str : pointer to a string
 *    * Return: nothing
 *     */

void _puts(char *str);

/**
 *  * print_rev - prints a string in reverse
 *   * @s: pointer to a string
 *    */

void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s);
/**
 * puts2 - prints every other character of a string, followed by a new line
 * @str : pointer to a string
 * Return: nothing
 */

void puts2(char *str);

/**
 *  * puts_half - prints half of a string, followed by a new line
 *   * @str : pointer to a string
 *    * Return: nothing
 *     */

void puts_half(char *str);

/**
 *  * print_array - prints n elements of an array of integers followed by \n
 *   * @n: is the number of elements of the array to be printed
 *    * @a: array of integers
 *     * Return: nothing
 *      */

void print_array(int *a, int n);

/**
 *  * _strcpy - copies string
 *   * @src: source string
 *    * @dest: destination string
 *     * Return: dest
 *      */

char *_strcpy(char *dest, char *src);



#endif
