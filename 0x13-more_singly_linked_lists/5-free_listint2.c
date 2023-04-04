#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - free a listint_t list.
 * @head: head of the list
 * set the head to NULL
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *last;
		if (head == NULL)
			return;
		while (*head != NULL)
	{
		last = (*head)->next;
		free(*head);
			*head = last;
	}
}
