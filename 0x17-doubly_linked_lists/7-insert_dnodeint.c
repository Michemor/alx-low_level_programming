#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: pointer to head node
 * @idx: position where node will be inserted
 * @n: integer for new node
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *temp2 = NULL, *newnode = NULL;
	unsigned int i = 0;

	if (*h == NULL || h == NULL)
	{
		return (NULL);
	}
	newnode = create_node(newnode);
	newnode->n = n;
	temp = (*h)->next;
	temp2 = *h;
	i = 0;
	while (temp && newnode && temp2)
	{
	i++;
	if (i == idx)
	{
		newnode->prev = temp2;
		newnode->next = temp;
		temp2->next = newnode;
		temp->prev = newnode;
		return (newnode);
	}
	temp = temp->next;
	temp2 = temp2->next;
	}
	return (NULL);
}

/**
 * create_node - creates memory for node
 * @node: memory to be created
 *
 * Return: node
 */
dlistint_t *create_node(dlistint_t *node)
{
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
	free(node);
	return (NULL);
	}
	return (node);
}
