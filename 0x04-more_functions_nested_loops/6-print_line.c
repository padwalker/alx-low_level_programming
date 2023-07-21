#include "main.h"

/**
 *
 *
 *
 */

void print_line(int n)
{
	if ((n == 0) || (n < 0))
	{
		putchar('\n');
	}
	else
	{
		while (n)
		{
			putchar('-');
			n--;
		}
		putchar('\n');
	}
}
