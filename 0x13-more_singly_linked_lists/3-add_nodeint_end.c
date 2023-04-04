#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add a new at the end of a listint_t list.
 * @head: head listint
 * @n: int add the node
 * Return: the NULL it it failed
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *last;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
	*head = ptr;
	return (ptr);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = ptr;
	return (ptr);
}
