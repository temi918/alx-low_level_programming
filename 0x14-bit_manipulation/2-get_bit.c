#include "main.h"

/**
 * get_bit - A function that gets the value of a bit at given index.
 *
 * @n: = the bit.
 *
 * @i: The index to get the value at.
 *
 * Return: returns -1 if there's an error, or the value of num at index.
 *
 */

int get_bit(unsigned long int n, unsigned int i)
{
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << i)) == 0)
		return (0);

	return (1);
}
