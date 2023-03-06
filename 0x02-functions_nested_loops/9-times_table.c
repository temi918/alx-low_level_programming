#include "main.h"

/**
 * times_table - Check main
 * Description: Prints 9 times table starting with 0
 * Return: Nothing.
 */

void print_times_table(void)
{
    int i, j, product;

    for (i = 0; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            product = i * j;

            if (product < 10) {
                _putchar(product + '0');
                _putchar(' ');
            }
            else {
                _putchar((product / 10) + '0');
                _putchar((product % 10) + '0');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}
