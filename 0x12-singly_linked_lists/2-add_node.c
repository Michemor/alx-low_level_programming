#include "lists.h"

/**
 * add_node - adds a node at the beginning of the list
 * @head: pointer to start of the list
 * @str: string to be contained in the structure
 *
 * Return: address to the newly created list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
	return (NULL);
	}
	if (str == NULL)
	{
	ptr->str = strdup("(nil)");
	ptr->len = 0;
	}
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
