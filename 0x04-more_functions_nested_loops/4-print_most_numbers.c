/**
 * Write a function that prints the numbers, from 0 to 9, followed by a new line.
 * Return: 0
 */
#include "main.h"
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
