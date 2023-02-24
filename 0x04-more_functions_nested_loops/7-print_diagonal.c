#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: A counter integer
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
