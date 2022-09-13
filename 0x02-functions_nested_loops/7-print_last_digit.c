#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: letter whose last digit is needed
 * Return: Last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
		return (n);
	return (0);
}
