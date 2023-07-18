#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lower case 10 tims
 * contains two for loops and uses two _putchar
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	char alph;

	for (i = 0; i <= 9; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
