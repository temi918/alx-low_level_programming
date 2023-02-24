#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * followed by a new line.
 * @n: Arbitrary integer
 * Return: 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
