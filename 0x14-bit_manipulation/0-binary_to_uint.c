#include "main.h"

/**
 * binary_to_uint - A function that converts
 * a binary number to an unsigned int
 *
 * @c: The string containing the binary number
 *
 * Return: return the converted number
 *
 */

unsigned int binary_to_uint(const char *c)
{
	unsigned int b = 1;
	int result = 0;
	int l = 0;

	if (c == NULL)
		return (0);

	while (c[l])
		l++;

	while (l)
	{
		if (c[l - 1] != '0' && c[l - 1] != '1')
			return (0);

		if (c[l - 1] == '1')
			result += b;
		b *= 2;
		l--;
	}
	return (result);
}
