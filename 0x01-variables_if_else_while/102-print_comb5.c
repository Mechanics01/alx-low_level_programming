#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 98; i++)
	{
		for (k = i + 1; k <= 99; k++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			if (i == 88 && k == 99)
				continue;
			putchar(',');
			putchar(' ');
				
		}
	}
	putchar('\n');
	return (0);
}
