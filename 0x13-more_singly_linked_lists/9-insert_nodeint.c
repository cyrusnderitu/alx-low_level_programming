#include "lists.h"

/**
 * insert_nodeint_at_index - Indserting node at idx
 * @head: pointer to node of listint_t
 * @idx: postion to position the node
 * @n: value of node
 * Return: the new_node else (NULL)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int pos;
temp = *head;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = temp;
*head = new_node;
return (new_node);
}
for (pos = 0; pos < (idx - 1); pos++)
{
	temp = temp->next;
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
