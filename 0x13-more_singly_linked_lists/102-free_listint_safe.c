#include "lists.h"

/**
 * free_listp2 - A function that frees a linked list
 *
 * @head: The head of the list.
 *
 * Return: Returns nothing.
 */

void free_listp2(listp_t **head)
{
	listp_t *t;
	listp_t *rr;

	if (head != NULL)
	{
		rr = *head;
		while ((t = rr) != NULL)
		{
			rr = rr->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - A function that frees a linked list.
 *
 * @h: The head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nd = 0;
	listp_t *cv, *yet, *add;
	listint_t *curr;

	cv = NULL;
	while (*h != NULL)
	{
		yet = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		yet->p = (void *)*h;
		yet->next = cv;
		cv = yet;

		add = cv;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nd);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nd++;
	}

	*h = NULL;
	free_listp2(&cv);
	return (nd);
}
