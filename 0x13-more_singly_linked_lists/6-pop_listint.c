#include "lists.h"

/**
 * pop_listint - Pop the first elem of listint_t
 * @head: pointer to node to pop from list
 * Return: data of the head node else return(0)
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int data;
if (*head == NULL)
return (0);
tmp = *head;
data = (*head)->n;
*head = (*head)->next;
free(tmp);
return (data);
}
