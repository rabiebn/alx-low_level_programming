#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two ints
 * @a: int
 * @b: int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs two ints
 * @a: int
 * @b: int
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multuplies two ints
 * @a: int
 * @b: int
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divieds two ints
 * @a: int
 * @b: int
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divieds two ints
 * @a: int
 * @b: int
 * Return: reminder of division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
