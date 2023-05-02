#include "lists.h"

/**
 * free_listint - free a node in listint_t
 * @head: pointer to head of list in listint_t
 */
void free_listint(listint_t *head)
{
listint_t *ptr;
while (head)
{
ptr = head->next;
free(head);
head = ptr;
}
}
