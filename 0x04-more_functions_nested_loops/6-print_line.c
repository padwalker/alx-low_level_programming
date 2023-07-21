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
		for(i = n; i >= 0; i--)
		{
			putchar('-');
		}
		putchar('\n');
	}
}
