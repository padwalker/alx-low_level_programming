#include<stdio.h>
#include "main.h"

/**
 * print_to_98 - function accepts n and prints natural number
 * untill 98 or backwards
 * @n: argument of integer number passed to the function
 *
 * Return: void or print in the function
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			if ((i < 98))
			{
				printf("%d, ", i);
			}
		}
		printf("\n");
	}
	if (n >= 98)
	{
	       for (i = n; i >= 98; i--)
	        {
			if (i > 98)
			{
				printf("%d, ", i);
			}
			if (i == 98)
			{
				printf("%d", i);
			}
	        }
		printf("\n");
	}
}
