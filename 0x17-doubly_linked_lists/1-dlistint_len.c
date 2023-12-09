#include "lists.h"

/**
 * dlistint_len - prints the number of nodes contained in a list
 * @h: pointer to head node
 *
 * Return: number of nodes contained in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	size_t nodes = 0;

	while (temp)
	{
	nodes++;
	temp = temp->next;
	}
	return (nodes);
}
