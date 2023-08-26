#include "lists.h"
/**
 * add_node - Adds a new node of a list_t list.
 * @head: Pointer to the pointer of the linked list.
 * @str: String to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return NULL;
	}
	new_node->len = strlen(str);
	while (str[length] != '\0')
	{
		length++;
	}
	new_node->len = length;
	if (*head != NULL)
		new_node->next = *head;
	if (*head == NULL)
		new_node->next = NULL;
	*head = new_node;
	return (*head);
}
