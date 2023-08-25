#include "lists.h"

/**
 * add_node - Adds a new node of a list_t list.
 * @head: Pointer to the pointer of the linked list.
 * @str: String to be added to the new node.
 *
 *  Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	
