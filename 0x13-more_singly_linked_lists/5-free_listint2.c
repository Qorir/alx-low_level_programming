#include "lists.h"

/**
 * free_listint2 - free listint_t list
 * @head: pointer to the head of listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}