#include "lists.h"

/**
 * add_nodeint_end - adding node with value in at end of list
 * @head: node to add
 * @n: value accompanied with the node
 * Return: nodes withihin the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *last_node;
last_node = malloc(sizeof(listint_t));
if (last_node == NULL)
return (NULL);
last_node->n = n;
last_node->next = NULL;
if (*head == NULL)
{
*head = last_node;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
}
temp->next = last_node;
return (last_node);
}
