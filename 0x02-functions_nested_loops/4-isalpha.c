#include "main.h"

/**
 * _isalpha() - checks whether passed value is 
 *  character (lower or upper case) or number
 *
 * @c - argument passed for checking
 * Return: 1 if passed argument is lowercase or uppercase letter
 * 	   0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <=122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
