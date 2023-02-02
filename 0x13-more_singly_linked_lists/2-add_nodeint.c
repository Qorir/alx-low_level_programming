#include "lists.h"

/**
 * add_nodeint - adds a nods at the beggining of listint_t list
 * @head: pointer to the address of the head of listint_tlist
 * @n: integer to be added
 *
 * Return: if function fails - NULL
 *         otherwise - address to the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
