#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main() {
    int current = 1;
    int previous = 1;
    int next;
    int count = 2;

    printf("%d, %d, ", previous, current);

    while (count < 98) {
        next = current + previous;
        previous = current;
        current = next;
        printf("%d, ", current);
        count++;
    }

    next = current + previous;
    previous = current;
    current = next;
    printf("%d\n", current);

    return 0;
}
