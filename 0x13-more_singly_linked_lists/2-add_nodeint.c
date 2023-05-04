#include "lists.h"

/**
 * add_nodeint - adding a node at the beginning of list
 * @head: noe to be added
 * @n: value existing in the node.
 * Return: the list of elem
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
