#include "main.h"

/**
 * clear_bit - A function that sets the value of a given bit to 0
 *
 * @number: A pointer to the number to change
 *
 * @i: The index of the bit to clear
 *
 * Return: returns 1 for success and -1 for failure
 *
 */

int clear_bit(unsigned long int *number, unsigned int i)
{
	if (i > 63)
		return (-1);

	*number = (~(1UL << i) & *number);
	return (1);
}
