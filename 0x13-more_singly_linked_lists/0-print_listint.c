#include "lists.h"

/**
 * print_listint - prints all the elements
 * @a: linked list of type listint_t to print
 *
 * Return: number node
 */
size_t print_listint(const listint_t *a)
{
	size_t i = 0;

	while (a)
	{
		printf("%d\n", a->n);
		i++;
		a = a->next;
	}

	return (i);
}

