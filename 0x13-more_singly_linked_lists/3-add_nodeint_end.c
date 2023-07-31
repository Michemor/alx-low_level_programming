#include "lists.h"

/**
 * add_nodeint_end - creates a node and adds it at the end of the list
 * @head: pointer to the head of the list
 * @n: integer to be added to a node
 *
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
	return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
	*head = ptr;
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = ptr;
	}
	return (*head);
}
