#ifndef LISTS_H
#define LIST_H

/**
 * Desc: Header file containing all the prototypes and definations for all functions and types wrutten in 0x13-more_singly_linked_lists
 */

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly link list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t;

size_t print_listint(const listint_t *h);


#endif
