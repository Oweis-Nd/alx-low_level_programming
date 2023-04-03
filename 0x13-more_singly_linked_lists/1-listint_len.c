#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return the number of elements in a linked listint_t list.
 * @h: head to the linklist node
 * Return: the node
 *
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;
		while (h)
	{
		num++;
	h = h->next;
	}
	return (num);
}
