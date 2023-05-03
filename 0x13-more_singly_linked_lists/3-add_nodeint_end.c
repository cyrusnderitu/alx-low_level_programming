#include "lists.h"

/**
 * add_nodeint_end - adding node  at end of list
 * @head: pointer to head to add end
 * @n: value accompanied with the node
 * Return: nodes withihin the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp;
listint_t *last = malloc(sizeof(listint_t));
if (last == NULL)
{
return (NULL);
}
last->n = n;
last->next = NULL;
if (*head == NULL)
{
*head = last;
}
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = last;
}
return (last);
}
