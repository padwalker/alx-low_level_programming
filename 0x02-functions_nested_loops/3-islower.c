#include "main.h"

/**
 * _islower() - function pass integer and returns 1 or 0
 * @c - argument passed by the function
 * Return: 0 if the character is lowercase
 * 	   1 if the character is uppercase
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	if ( c >= 48 && c <= 57)
	{
		return (0);
	}
	if ( c>= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
