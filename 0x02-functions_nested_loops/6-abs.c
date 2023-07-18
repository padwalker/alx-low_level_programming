#include "main.h"

/**
 * _abs() - computes absolute value of an integer.
 *
 * Return: Integer value
 */
int _abs(int num)
{
	if (num == 0)
	{
		return (0);
	}
	if (num > 0)
	{
		return (num);
	}
	if (num < 0)
	{
		return ((0 - num));
	}
	return (0);
}
