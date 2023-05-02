#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @a: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *a)
{
	size_t i = 0;

	while (a)
	{
		i++;
		a = a->next;
	}

	return (i);
}
