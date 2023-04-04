#include "lists.h"

/**
 * find_listint_loop - A function that finds a loop in a linked list.
 *
 * @head: The head of the list.
 *
 * Return: Returns the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *pv;

	p = head;
	pv = head;
	while (head && p && p->next)
	{
		head = head->next;
		p = p->next->next;

		if (head == p)
		{
			head = pv;
			pv =  p;
			while (1)
			{
				p = pv;
				while (p->next != head && p->next != pv)
				{
					p = p->next;
				}
				if (p->next == head)
					break;

				head = head->next;
			}
			return (p->next);
		}
	}

	return (NULL);
}
