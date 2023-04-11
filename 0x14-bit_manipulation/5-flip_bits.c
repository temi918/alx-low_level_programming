#include "main.h"

/**
 * flip_bits - A function that counts the number of bits to change
 *
 * @num: This is the first number
 *
 * @num2: This is the second number
 *
 * Return: returns the number of bits to change
 *
 */

unsigned int flip_bits(unsigned long int num, unsigned long int num2)
{
	int i;
	int cnt = 0;
	unsigned long int curr;
	unsigned long int x = num ^ num2;

	for (i = 63; i >= 0; i--)
	{
		curr = x >> i;
		if (curr & 1)
			cnt++;
	}

	return (cnt);
}
