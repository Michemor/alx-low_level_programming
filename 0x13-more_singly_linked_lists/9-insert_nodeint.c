#include "lists.h"

/**
 * insert_nodeint_at_index - creates node and adds it at specified index
 * @head: pointer to head node
 * @idx: position to insert new node
 * @n: integer value for creating new node
 *
 * Return: address to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newnode;
	unsigned int count = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
	free(newnode);
	return (NULL);
	}
	newnode->n = n;
	temp = *head;
	while (temp->next != NULL)
	{
	count++;
	temp = temp->next;
	}
	if (idx > count)
	{
	return (NULL);
	}
	count = 0;
	temp = *head;
	while (count < idx)
	{
	count++;
	temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (*head);
}
