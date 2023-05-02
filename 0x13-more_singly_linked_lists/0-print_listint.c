#include "lists.h"

/**
 * print_listint - printing the length of list
 * @h: the node list passed as param
 * Return: Len of list
 */
size_t print_listint(const listint_t *h)
{
size_t len = 0;
while (h)
{
_putchar(h->n + '0');
_putchar('\n');
h = h->next;
len++;
}
return (len);
}
