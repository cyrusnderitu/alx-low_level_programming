#include "lists.h"

/**
 * reverse_listint - function to reverse listint_t list
 * @head: pointer to listint_t list
 * Return: pointer to node 1 of reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *front, *back;
if (head == NULL || *head == NULL)
return (NULL);
back = NULL;
while ((*head)->next != NULL)
{
front = (*head)->next;
(*head)->next = back;
back = *head;
*head = front;
}
(*head)->next = back;
return (*head);
}
