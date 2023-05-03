#include "lists.h"

/**
 * get_nodeint_at_index - getting node at given index
 * @head: pointer to node to find in listint_t list
 * @index: position of the node in the listint_t list
 * Return: node of the index given
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int elem;
for (elem = 0; elem < index; elem++)
{
	if (head == NULL)
	return (NULL);
	head = head->next;
}
return (head);
}
