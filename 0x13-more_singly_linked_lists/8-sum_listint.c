#include "lists.h"

/**
 * sum_listint - calcs sum of all value (n) of nodes
 * @head: poointer to nodes of listint_t
 * Return: sum of n values of listint_t
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (!head)
return (0);
while (head)
{
	sum += head->n;
	head = head->next;
}
return (sum);
}
