#include <stdio.h>

int main(void)
{
	int myInt;
	long int myLInt;
	long long int myLLInt;
	char myChar;
	float myFloat;
	printf("Size of a char: %lu byte(s)\n", sizeof(myChar));
	printf("Size of an int: %lu byte(s)\n", sizeof(myInt));
	printf("Size of a long int: %lu byte(s)\n", sizeof(myLInt));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(myLLInt));
	printf("Size of a float: %lu byte(s)\n", sizeof(myFloat));
	return (0);
}
