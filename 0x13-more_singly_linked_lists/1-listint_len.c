#include "lists.h"

/**
 * listint_len - Func for num of elem in listint_t
 * @h: head.
 * Return: Number of elem in listint_t
 */
size_t listint_len(const listint_t *h)
{
size_t elem = 0;
while (h)
{
h = h->next;
elem++;
}
return (elem);
}
