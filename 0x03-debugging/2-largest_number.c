#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	if (a > c && c > b)
	{
		largest = a;
	}
	if (b > a && a > c)
	{
		largest = b;
	}
	if(b > c && c > a)
	{
		largest = b;
	}
	if (c > b && b > a)
	{
		largest = c;
	}
	if (c > a && a > b)
	{
		largest = c;
	}
	return largest;
}
