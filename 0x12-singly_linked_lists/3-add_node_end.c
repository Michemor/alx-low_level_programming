#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to the head of the node
 * @str: string pointer to member of head list
 *
 * Return: memory location of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
	ptr->str = strdup("nil");
	ptr->len = 0;
	}
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
	*head = ptr;
	}
	else
	{
	temp = *head;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = ptr;
	}
	return (*head);
}
