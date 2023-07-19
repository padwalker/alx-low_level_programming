#include "main.h"

/**
 * _abs - computes absolute value of an integer num.
 * num - the number to be checked
 *
 * Return: if num is +ve return num,
 * if 0 return 0.
 * if num is -ve return -num.
 * 0 otherwise
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
