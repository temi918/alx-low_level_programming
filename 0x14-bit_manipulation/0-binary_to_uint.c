#include "main.h"

/**
 * binary_to_uint - A function that converts
 * a binary number to an unsigned int
 *
 * @b:The string containing the binary number
 *
 * Return: return the converted number
 *
 */

unsigned int binary_to_uint(const char *b)
{
	int ji;
	unsigned int _val = 0;

	if (!b)
		return (0);

	for (ji = 0; b[ji]; ji++)
	{
		if (b[ji] < '0' || b[ji] > '1')
			return (0);
		_val = 2 * val + (b[ji] - '0');
	}

	return (_val);
}
