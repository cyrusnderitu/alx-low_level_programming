#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: the list with list_t struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t nodes = 0;
while (h != NULL)
{
if (h->str == NULL)
{
	printf("[0] (nil)\n");
}
else
{
	printf("[%d] %s\n", h->len, h->str);
}
nodes++;
h = h->next;
}
return (nodes);
}
