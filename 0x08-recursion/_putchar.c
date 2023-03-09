#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: only on success 1.
 * On error, -1 is returned, and error number is set appropraitely
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
