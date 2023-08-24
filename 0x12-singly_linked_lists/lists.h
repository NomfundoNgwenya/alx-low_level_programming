#ifndef LIST_H
#define LISH_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);

#endif
