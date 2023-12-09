#include "lists.h"

/**
 * sum_dlistint - calculates sum of integers in a doubly linked list
 * @head: pointer to head
 *
 * Return: sum if list contains integers or o if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}
	return (sum);
}
