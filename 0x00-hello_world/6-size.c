#include <stdio>

/**
 * main - Print the sizeof many var types
 *
 * Return: always 0
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int a;
	float b;

	printf("size of a char: %d bytes(s)\n", sizeof(x));
	printf("size of a int: %d bytes(s)\n", sizeof(y));
	printf("size of a long int: %d bytes(s)\n", sizeof(z));
	printf("size of a long long int: %d bytes(s)\n", sizeof(a));
	printf("size of a float: %d bytes(s)\n", sizeof(b));
	return (0);
}
