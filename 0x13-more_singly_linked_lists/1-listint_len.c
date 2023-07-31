#include "lists.h"

/**
 * listint_len - prints the number of nodes in the list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
