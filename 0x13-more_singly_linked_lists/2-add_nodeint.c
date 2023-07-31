#include "lists.h"

/**
 * add_nodeint - creates node and adds it at the beginning of a list
 * @head: pointer to the head node
 * @n: integer to be added
 *
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
	return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
