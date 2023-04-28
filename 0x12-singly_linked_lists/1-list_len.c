#include "lists.h"

/**
 * list_len - Counting the number of nodes available
 * @h: the list of struct list_t
 * Return: the number of elem in the list
 */
size_t list_len(const list_t *h)
{
size_t nodes = 0;
while (h)
{
	h = h->next;
	nodes++;
}
return (nodes);
}
