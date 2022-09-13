#include "main.h"
/**
 * _isalpha - checks for a alphabetic characters
 * @c: letter being tested
 * Return: 1 if c is an upper case, lowercase or letter
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
