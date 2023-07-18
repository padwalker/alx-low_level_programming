#include "main.h"
/**
 * main - Entry point
 * 
 * print_alphabet() - prints alphabet small letter
 * Description: this function prints alphabet
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
