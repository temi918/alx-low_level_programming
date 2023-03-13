#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int z = 0;
	char *array;

	array = malloc(size * sizeof(char));

	if (array == 0)
		return (0);
	if (array == NULL)
		return (NULL);
	while (z < size)
	{
		array[z] = c;
		array++;
	}
	return (array);
}

