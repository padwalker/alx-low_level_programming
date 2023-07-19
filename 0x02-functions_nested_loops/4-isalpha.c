#include "main.h"

/**
 * _isalpha - checks whether passed value is
 * character (lower or upper case) or number
 *
 * ch - argument passed for checking alphabetic
 *
 * Return: 1 if passed argument is lowercase or uppercase letter.
 * 0 otherwise
 *
 */

int _isalpha(int ch)
{
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
