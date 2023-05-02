#include "lists.h"

/**
 * free_listint - free node
 * @head: node to free
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head != NULL)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
