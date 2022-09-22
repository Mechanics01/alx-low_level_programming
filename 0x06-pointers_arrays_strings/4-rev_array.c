#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of array elemetns
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp, con;

	if (n % 2 == 0)
		con = n;
	else
		con = n - 1;
	for (i = 0; i < con / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
