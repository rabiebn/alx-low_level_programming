#include <stdio.h>

/**
 * beforeMain - prints before the main function
 */

void __attribute__ ((constructor)) beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
