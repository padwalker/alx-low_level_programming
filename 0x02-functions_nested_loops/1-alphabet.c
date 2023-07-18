#include "main.h"
/**
 * print_alphabet() - prints alphabet small letter
 *
 * Return: void and display text
 */

/* print_alphabet definition and body */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
