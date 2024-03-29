#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: a pointer to the head of list_t
 * @str: string to be added to list_t
 *
 * Return: NULL if the function fails
 *         otherwise the adress of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
