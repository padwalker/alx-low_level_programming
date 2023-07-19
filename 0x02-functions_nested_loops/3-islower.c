#include "main.h"

/**
 * _islower - function check uppercase, lowercase and others.
 *
 * @lower: character argument passed to be checkedn
 *
 * Return: 0 if the character is lowercase
 * 1 if the character is uppercase
 */
int _islower(int lower)
{
	if (lower >= 97 && lower <= 122)
	{
		return (1);
	}
	if (lower >= 65 && lower <= 90)
	{
		return (0);
	}
	if (lower >= 48 && lower <= 57)
	{
		return (0);
	}
	return (0);
}
