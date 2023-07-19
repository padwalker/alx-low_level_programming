#include "main.h"
/**
 * print_last_digit - prints last digit using modulo operation
 * @c:  accepts one integer argument
 *
 * Return: Always 0 (success)
 */ 
int print_last_digit(int c)
{
	if (c == 0)
	{
		return (0);
	}
	if (c > 0 )
	{
		return ( c % 10);
	}
	if ( c < 0)
	{
		return ( (( 0 - c) % 10));
	}
	return (0);
}
