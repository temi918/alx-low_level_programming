#include "main.h"
void print_integer(int m);

/**
 * print_numbers - print integers using _putchar
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	char a, b, c, d, e, f, g, h, i, j;

	a = ((n % 10) + '0');
	b = ((n / 10) + '0');
	c = (((n / 10) % 10) + '0');
	d = (((n / 10) / 10) + '0');
	e = ((((n / 10) / 10) / 10) + '0');
	f = ((((n / 10) / 10) % 10) + '0');
	g = (((n % 100) / 10) + '0');
	h = (((n % 10) % 10) + '0');
	i = ((n % 10) + '0' + 17);
	j = ((n / 10) + '0' + 17);
	if (n > 9 && n < 99)
	{
		_putchar(b);
		_putchar(a);
	}
	if (n > 99 && n < 999)
	{
		_putchar(d);
		_putchar(c);
		_putchar(a);
	}
	if (n > 999)
	{
		_putchar(e);
		_putchar(f);
		_putchar(g);
		_putchar(h);
	}
	if (n < 9 && n > -1)
	{
		_putchar(a);
	}
	if (n < 0)
	{
		_putchar('-');
		_putchar(i);
		_putchar(j);
	}
}
