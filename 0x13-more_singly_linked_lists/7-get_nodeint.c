#include "lists.h"

/**
 * get_nodeint_at_index - prints value of node at specific index
 * @head: pointer to head node
 * @index: position of node we wish to print
 *
 * Return: pointer to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
	{
	return (NULL);
	}

	temp = head;
	while (count != index)
	{
	count++;
	temp = temp->next;
	}
	return (temp);
}
