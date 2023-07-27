#include "lists.h"

/**
 * free_list - frees memory allocated to members of a list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	free(head);
	while (temp != NULL)
	{
	list_t *ptr = temp;
	temp = temp->next;
	free(ptr->str);
	free(ptr->next);
	}
	free (temp);
}
