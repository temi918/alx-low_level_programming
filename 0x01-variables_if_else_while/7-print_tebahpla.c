#include <stdio.h>

/**
 * main - Entry point
 * Description - prints the alphabets in reverse
 * Return: 0 (always succes)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
