#include "lists.h"

/**
 * pop_listint - deletes the head node of a list and sets it to next node
 * @head: pointer to the head node
 *
 * Return: contents of previous head node
 */
int pop_listint(listint_t **head)
{
	int headVal;
	listint_t *temp;

	if (head == NULL)
	{
	free(head);
	return (0);
	}
	headVal = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (headVal);
}
