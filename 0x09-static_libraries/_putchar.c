#include <unistd.h>
/**
 * _putchar - write
 * @c: The character to print
 * Return: On sucess 1.
 * on error, -1
 */
int _putchar(char c)
{
	return (write(1, &c , 1));
}
