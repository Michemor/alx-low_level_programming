#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head->next != NULL)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
	free(temp);
}
