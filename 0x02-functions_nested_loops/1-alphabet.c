#include "main.h"
/**
 * print_alphabet - prints alphabet small letter
 *
 * Return: void value
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
