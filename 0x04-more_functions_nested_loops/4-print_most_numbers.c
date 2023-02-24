#include "main.h"

/**
 * print_most_numbers - Prints the numbers 0 - 9.
 * Except 2 and 4, then a new line.
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
