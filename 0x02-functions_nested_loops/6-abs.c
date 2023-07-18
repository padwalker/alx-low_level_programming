#include "main.h"

/**
 * _abs() - computes absolute value of an integer.
 *
 * Return: Integer value
 */
int _abs(int c)
{
	if ( c == 0)
	{
		return (0);
	}
	if (c > 0)
	{
		return (c);
	}
	if (c < 0)
	{
		return ((0 - c));
	}
	return (0);
}
