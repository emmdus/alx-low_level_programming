#include "main.h"

/**
 * Write a function that draws a straight line in the terminal.
 * The shortest distance between two points is a straight line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
}
