#ifndef LIST_H
#define LISH_H

#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @len: length of the string
 * @next: points to the next node
 * @str: string - (malloc'ed string)
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* LIST_H */
