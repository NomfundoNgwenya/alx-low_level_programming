#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
