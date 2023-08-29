#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting at 0
 *
 * Return: Pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
