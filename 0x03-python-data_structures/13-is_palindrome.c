#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a singly-linked listint_t list
 * @head: pointer
 *
 * Return: a pointer to the head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = *head, *next, *prev = NULL;

	while (node)
	{
		next = node->next;
		node->next = prev;
		prev = node;
		node = next;
	}

	*head = prev;
	return (*head);
}

/**
 * is_palindrome - function that checks if a singly linked list is a palindrome
 * @head: a pointer to the head of the linked list
 *
 * Return: 0 If the linked list is not a palindrome
 *  1 If the linked list is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *tmp, *rev, *md;
	size_t size = 0, i;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	tmp = *head;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}

	tmp = *head;
	for (i = 0; i < (size / 2) - 1; i++)
		tmp = tmp->next;

	if ((size % 2) == 0 && tmp->n != tmp->next->n)
		return (0);

	tmp = tmp->next->next;
	rev = reverse_listint(&tmp);
	md = rev;

	tmp = *head;
	while (rev)
	{
		if (tmp->n != rev->n)
			return (0);
		tmp = tmp->next;
		rev = rev->next;
	}
	reverse_listint(&md);

	return (1);
}
