#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @hd: The head of a list.
 *
 * Return: Returns the sum of all the data(n)
 */

int sum_listint(listint_t *hd)
{
	int sum;

	sum = 0;
	while (hd != NULL)
	{
		sum += hd->n;
		hd = hd->next;
	}

	return (sum);
}
