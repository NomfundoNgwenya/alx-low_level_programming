#include "lists.h"

/**
 * pop_listint - returns the head node’s data (n)
 * @head: Pointer to a pointer to the head of the list
 * Return: The data (n) of the deleted head node
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;


	if (head == NULL || *head == NULL)
		return (0);


	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);


	return (data);
}