#include "main.h"

/**
 * _isdigit - function check uppercase, lowercase and others.
 * 
 * @ch: character argument passed to be checkedn
 *
 * Return: 0 if the character is lower or uppercase
 * 1 if digit
 */
int _isdigit(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (0);
	}
	if (ch >= 65 && ch <= 90)
	{
		return (0);
	}
	if (ch >= 48 && ch <=57)
	{
		return (1);
	}
	return (0);
}
