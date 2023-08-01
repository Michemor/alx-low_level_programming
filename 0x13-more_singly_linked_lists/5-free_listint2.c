#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to head node
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
	return;
	}

	while ((*head) != NULL)
	{
	listint_t *temp;

	temp = *head;
	*head = (*head)->next;
	free(temp);
	}
	*head = NULL;
}
