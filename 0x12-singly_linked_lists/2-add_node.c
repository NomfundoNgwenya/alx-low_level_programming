#include "lists.h"
/**
 * add_node - Adds a new node of a list_t list.
 * @head: Pointer to the pointer of the linked list.
 * @str: String to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;


	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);


	add->len = strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}

/**
 * _strlen - length of a string
 * @s: s is char
 *
 * Return: i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
