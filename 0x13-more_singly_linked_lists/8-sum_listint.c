#include "lists.h"

/**
 * sum_listint - sums up value of n in each node of the list
 * @head: pointer to head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
	return (0);
	}
	sum += head->n;
	while (head->next != NULL)
	{
	head = head->next;
	sum += head->n;
	}
	return (sum);
}
