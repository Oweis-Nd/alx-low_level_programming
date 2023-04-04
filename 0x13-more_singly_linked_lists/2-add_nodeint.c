#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: head linklist
 * @n: int add the list
 * Return: NULL if it failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(listint_t));
			if (head == NULL)
			return (NULL);

			add->n = n;
			add->next = *head;
			*head = add;
			return (add);
			}
