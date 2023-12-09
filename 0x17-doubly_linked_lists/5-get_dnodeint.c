#include "lists.h"

/**
 * get_dnodeint_at_index - adds node at a given index
 * @head: pointer to head node
 * @index: position where node is retrieved
 *
 * Return: pointer at specific index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = NULL;

	temp = head;
	i = 0;
	while (temp)
	{
	if (index == i)
	{
	return (temp);
	}
	temp = temp->next;
	i++;
	}
	return (NULL);
}
