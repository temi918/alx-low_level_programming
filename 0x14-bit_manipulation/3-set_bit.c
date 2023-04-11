#include "main.h"

/**
 * set_bit - A function that sets the value of a bit at a given index to 1.
 *
 * @number: A pointer to the bit.
 *
 * @i: The index to set the value at.
 *
 * Return: retturns If there's an error -1, else, returns 1
 *
 */

int set_bit(unsigned long int *number, unsigned int i)
{
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);

	*number ^= (1 << i);

	return (1);
}
