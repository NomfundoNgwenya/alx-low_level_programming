#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting at 0
 * Return: Pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int count = 0;


	while (current_node != NULL)
	{
		if (count == index)
			return (current_node);
		count++;
	}


	return (NULL);
}
