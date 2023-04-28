#include "lists.h"

/**
 * add_node -  Adds node at the beginning of list_t
 * @head: pointer to head
 * @str: data of a node /elem
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list *new_node = malloc(sizeof(list_t));
	int i = 0
	if (new_node == NULL)
	return (NULL);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[i] != '\0')
	len++;
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
