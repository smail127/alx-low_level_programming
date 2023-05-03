#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the head of the list.
 * @idx: index of the new node.
 * @n: value of the new node.
 *
 * Return: address of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current_node;
unsigned int i;

if (!head)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

current_node = *head;
for (i = 0; current_node && i < idx - 1; i++)
current_node = current_node->next;

if (!current_node)
{
free(new_node);
return (NULL);
}

new_node->next = current_node->next;
current_node->next = new_node;

return (new_node);
}
