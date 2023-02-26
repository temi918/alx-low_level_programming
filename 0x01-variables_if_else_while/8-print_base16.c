#include <stdio.h>

/**
 * main - Entry point
 * Description - A program that prints all nos of base 16 in lower case
 * Return: 0 (Always success)
 */

int main(void)
{
	int num;
	char low;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
