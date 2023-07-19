#include "main.h"

/**
 * print_sign - function checks numbers and determin +ve, zero or -ve
 * @num: argument passed for checking
 *
 * Return: 1 if number is positive
 * 0 if number is zero
 * -1 if number is negative
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	return ('/');
}
