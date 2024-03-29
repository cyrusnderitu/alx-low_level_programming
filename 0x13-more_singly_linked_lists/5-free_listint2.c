#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * @head: pointer to node to free
 */
void free_listint2(listint_t **head)
{
while (*head)
{
free(*head);
*head = (*head)->next;
}
head = NULL;
}
