#include "main.h"

/**
 * print_most_numbers - Prints the numbers 0 - 9.
 * Except 2 and 4, then a new line.
 * Return: 0
 */

void print_most_numbers(void)
{
	int a = '0';
	
	for (; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
		putchar('\n');
	}
}
