#include "lists.h"
/**
 * delete_nodeint_at_index - removes the node at index of a listint_t
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node that should be removed
 *  Return: -1 if it failed and 1 if it succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *prev_node = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL)
	{
		if (count == index)
		{
			prev_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		prev_node = current_node;
		current_node = current_node->next;
		count++;
	}

	return (-1);
}
