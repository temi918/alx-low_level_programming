#include "main.h"

/**
 * print_last_digit - Check main
 * @r: Integer input
 * Description: Prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int last_digit;

	if (r == 0)
	{
		last_digit == 0;
		_putchar(last_digit);
	}
	else if (r < 0)
	{
		last_digit = (r % 10);
		_putchar(last_digit);
	}
	else
	{
		last_digit = -1 * (r * 10);
	}
	return(last_digit);
}
