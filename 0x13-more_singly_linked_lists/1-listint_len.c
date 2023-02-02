#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return the number of elements in the listint_t
 * @h: pointer to the head of listint_t
 *
 * Return: number of elements in listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
