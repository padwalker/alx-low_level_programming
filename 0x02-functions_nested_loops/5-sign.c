#include "main.h"

/**
 * print_sign - function checks numbers and determin +ve, zero or -ve
 *
 * Returns: 1 if number is positive
 * | 0 if number is zero
 * |-1 if number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return ('/');
}
