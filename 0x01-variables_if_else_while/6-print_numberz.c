#include <stdio.h>

/**
 * main - Entry point
 * Description - prints 0-9 using putchar
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
