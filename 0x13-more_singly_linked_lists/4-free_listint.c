#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to head node
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
	listint_t *temp = head;

	head = head->next;
	free(temp);
	}
	free(head);
}
