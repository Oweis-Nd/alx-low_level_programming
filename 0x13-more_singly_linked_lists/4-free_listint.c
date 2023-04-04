#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free a listint_t list
 * @head: head of the list
 * Return: NULL
 *
 */

void free_listint(listint_t *head)
{
	listint_t *next;
		while (head != NULL)
	{
		next = head->next;
		free(head);
			head = next;
	}
}
