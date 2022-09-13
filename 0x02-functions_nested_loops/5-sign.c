#include "main.h"
/**
 * print_sign - checks for a alphabetic characters
 * @n: number whose sign is required
 * Return: 1 if n is greater than 0, 0 is n is 0,-1 is n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n ==0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

