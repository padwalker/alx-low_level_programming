#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet()
{
	char alph;
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
