#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

/**
 * print_alphabet - prints alphabet small letter
 *
 * Return: void and display text
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
