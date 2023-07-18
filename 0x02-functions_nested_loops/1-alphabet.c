#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	char *ch = "abcdefghijklmnopqrstuvwxyz\n";
	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
}
