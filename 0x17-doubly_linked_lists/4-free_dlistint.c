#include "lists.h"

/**
 * free_dlistint - frees the contents of a list
 * @head: pointer to head
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
	temp = head;
	head = head->next;
	free(temp);
	}
}
