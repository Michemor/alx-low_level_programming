#include "lists.h"

/**
 * print_listint - prints the contents of each node contained in the list
 * @h: pointer to head node
 *
 * Return: number of nodes contained in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	printf("%d\n", h->n);
	h = h->next;
	}
	return (count);
}
