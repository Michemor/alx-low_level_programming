#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: pointer to head node
 * @n: integer to be added
 *
 * Return: pointer to head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (head == NULL || *head == NULL)
	{
	*head = new;
	}
	else
	{
	temp = *head;
	while (temp->next)
	{
	temp = temp->next;
	}
	new->prev = temp;
	temp->next = new;
	temp = new;
	}
	return (*head);
}
