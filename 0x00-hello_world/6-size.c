#include <stdio.h>

/**
 * main - print the sideof var type
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("size of int: %ld byte(s)\n", sizeof(a));
	printf("size of char: %ld byte(s)\n", sizeof(b));
	printf("size of long: %ld byte(s)\n", sizeof(c));
	printf("size of long long: %ld byte(s)\n", sizeof(d));
	printf("size of float: %ld byte(s)\n", sizeof(e));
	return (0);
}
