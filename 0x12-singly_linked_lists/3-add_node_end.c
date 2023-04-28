#include "lists.h"

/**
 * add_node_end - Adding a new node at end of list_t
 * @head: node to add
 * @str: data within the node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp;
list_t *last_node = malloc(sizeof(list_t));
int i = 0;
if (last_node == NULL)
return (NULL);
if (str == NULL)
{
free(last_node);
return (NULL);
}
while (str[i] != '\0')
i++;
last_node->str = strdup(str);
last_node->len = i;
last_node->next = NULL;
if (*head == NULL)
{
*head = last_node;
}
else
{
while (temp->next != NULL)
temp = temp->next;
}
temp->next = last_node;
return (last_node);
}
