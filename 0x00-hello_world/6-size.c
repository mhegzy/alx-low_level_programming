#include <stdio.h>

/**
 * main - entry point for variable data type size
 *
 * Return: always zero
 */
int main()
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("size of int: %ld byte(s)\n", sizeof(a));
	printf("size of char: %ld byte(s)\n", sizeof(b));
	printf("size of long int: %ld byte(9s)\n", sizeof(c));
	printf("size of long long int: %ld byte(s)\n", sizeof(d));
	printf("size of float: %ld byte(s)\n", sizeof(e));

	return (0);
}
