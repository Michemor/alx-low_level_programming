#include "lists.h"

/**
 * add_dnodeint - creates a doubly linked list
 * @head: pointer to head node
 * @n: integer to be stored into node
 *
 * Return: pointer to entire list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
	return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	{
	(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
