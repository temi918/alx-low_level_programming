#include "main.h"

/**
 * get_endianness - A function that
 * checks if a machine is a little or big endian
 *
 * Return: returns 0 for big, and 1 for little
 *
 */

int get_endianness(void)
{
	unsigned int it = 1;
	char *car = (char *) &it;

	return (*car);
}
