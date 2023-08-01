#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specific index
 * @head: pointer to head node
 * @index: position of node to be deleted
 *
 * Return: 1 if successfully deleted and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *ptr;
	unsigned int i;

	if (temp == NULL)
	{
	return (-1);
	}
	if (index == 0)
	{
	*head = (*head)->next;
	free(temp);
	return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
	if (temp == NULL)
	{
	return (-1);
	}
	temp = temp->next;
	}
	ptr = temp->next;
	temp->next = temp->next->next;
	free(ptr);
	return (1);
}
