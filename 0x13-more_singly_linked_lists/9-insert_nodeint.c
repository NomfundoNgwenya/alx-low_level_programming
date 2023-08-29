#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: pointer to the head of the list
 * @idx: index the position to the new node
 * @n: added value to new node.
 *
 * Return: The address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node = *head;
	listint_t *prev_node = NULL;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current_node != NULL)
	{
		if (count == idx)
		{
			new_node->next = current_node;
			prev_node->next = new_node;
			return (new_node);
		}
		prev_node = current_node;
		current_node = current_node->next;
		count++;
	}

	if (count == idx)
	{
		prev_node->next = new_node;
		new_node->next = NULL;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
