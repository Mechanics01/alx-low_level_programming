#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "_putchar";
	int a = 0;

	for (a = 0; a <= 7; a++)
		_putchar(s[a]);
	_putchar('\n');
	return (0);
}
