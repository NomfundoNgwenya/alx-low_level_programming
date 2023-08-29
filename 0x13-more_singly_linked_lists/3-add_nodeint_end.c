#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the listint_t
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to be added to the new node
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node = *head;


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);


	new_node->n = n;
	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}


	return (new_node);
}
