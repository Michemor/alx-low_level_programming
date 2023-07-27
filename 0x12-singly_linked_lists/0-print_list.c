#include "lists.h"

/**
 * print_list - prints contents of a list
 * @h: head node of the list
 *
 * Return: the number of nodes contained in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	if (h->str != NULL)
	{
	printf("[%d] %s\n", h->len, h->str);
	}
	else
	{
	printf("[0] (nil)\n");
	}
	h = h->next;
	count++;
	}
	return (count);
}
