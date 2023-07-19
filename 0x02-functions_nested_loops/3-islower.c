#include "main.h"

/**
 * _islower() - function pass integer and returns 1 or 0
 * @lower - argument passed by the function
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
