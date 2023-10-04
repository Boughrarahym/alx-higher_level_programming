#include "lists.h"

/**
 * check_cycle - function that checks if a singly-linked list contains a cycle
 * @list: linked list
 *
 * Return: 0 If there is no cycle
 * 1 If there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *t, *h;

	t = h = list;

	while (t && h && h->next)
	{
		t = t->next;
		h = h->next->next;
		if (t == h)
			return (1);
	}
	return (0);
}
