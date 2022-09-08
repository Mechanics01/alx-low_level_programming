#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %d bytes(s)\n", sizeof(d));
	printf("Size of int: %d bytes(s)\n", sizeof(a));
	printf("Size of long int: %d bytes(s)\n", sizeof(b));
	printf("Size of long long int: %d bytes(s)\n", sizeof(c));
	printf("Size of float: %d bytes(s)\n", sizeof(f));

	return (0);
}
