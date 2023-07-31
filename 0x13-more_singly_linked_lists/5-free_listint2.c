#include "lists.h"

/**
 * free-listint2 - frees a list
 * @head: pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((*head)->next != NULL)
	{
	temp = (*head)->next;
	free(*head);
	*head = temp;
	}
	free(temp);
	*head = NULL;
}
