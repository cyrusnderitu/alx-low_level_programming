#include "lists.h"

/**
 * delete_nodeint_at_index - deleting node at given index
 * @head: pointer to node to delete
 * @index:position to delete node
 * Return:ALways success(0) else (-1);
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *cp = *head;
unsigned int pos;
if (cp == NULL)
return (-1);
if (index == 0)
{
	*head = (*head)->next;
	free(cp);
	return (1);
}
for (pos = 0; pos < (index - 1); pos++)
{
	if (cp->next == NULL)
	return (-1);
	cp = cp->next;
}
tmp = cp->next;
cp->next = tmp->next;
free(tmp);
return (1);
}
