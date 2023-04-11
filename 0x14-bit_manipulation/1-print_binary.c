#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number.
 *
 * @number: the nuumber to be printed in binary.
 *
 */

void print_binary(unsigned long int number)
{
	if (number > 1)
		print_binary(number >> 1);

	_putchar((number & 1) + '0');
}
