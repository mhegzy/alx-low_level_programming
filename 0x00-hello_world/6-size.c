#include <stdio.h>

/**
 * main - print the sideof var type
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	var b;
	long int c;
	long long int d;
	float e;
	printf("size of int :%d byte(s)\n", sizeof(a));
	printf("size of char: %d byte(s)\n", sizeof(b));
	printf("size of long int: %d byte(s)\n", sizeof(c));
	printf("size of long long int: %d byte(s)\n", sizeof(d));
	printf("size of float: %d byte(s)\n", sizeof(e));
	return (0);
}

