#include "lists.h"

/**
 * insert_n - functin that inserts a number into a sorted singly-linked list
 * @h: the h of the linked list.
 * @number: the number to be inserted
 *
 * Return: If the function fails - NULL
 * Otherwise - a pointer to the new n.
 */
listint_t *insert_node(listint_t **head, int number)

{
	listint_t *n = *h, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (n == NULL || n->n >= number)
	{
		new->next = n;
		*h = new;
		return (new);
	}

	while (n && n->next && n->next->n < number)
		n = n->next;

	new->next = n->next;
	n->next = new;

	return (new);
}
