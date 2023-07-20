#include "main.h"

/**
 * _isupper - function check uppercase, lowercase and others.
 *
 * @ch: character argument passed to be checkedn
 *
 * Return: 0 if the character is lowercase
 * 1 if the character is uppercase
 */
int _isupper(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	if (ch >= 65 && ch <= 90)
	{
		return (0);
	}
	if (ch >= 48 && ch <= 57)
	{
		return (0);
	}
	return (0);
}
