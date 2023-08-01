#include "lists.h"

/**
 * reverse_listint - reverses links of a list
 * @head: pointer to head node
 *
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur;
	listint_t *prev;

	cur = *head;
	prev = NULL;
	while (*head != NULL)
	{
	*head = (*head)->next;
	cur->next = prev;
	prev = cur;
	cur = *head;
	}
	*head = prev;
	return (*head);
}
