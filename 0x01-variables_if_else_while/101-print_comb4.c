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
	int i, k, a;

	for (i = '0'; i < '9'; i++)
	{
		for (k = i + 1; k <= '9'; k++)
		{
			for (a = k + 1; a <= '9'; a++)
			{

				if ((i != k) != a)
				{
					putchar(i);
					putchar(k);
					putchar(a);
					if (i == '7' && k == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
