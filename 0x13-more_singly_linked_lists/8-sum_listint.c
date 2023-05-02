#include "lists.h"

/**
 * sum_listint - calculates the somme of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting somme
 */
int sum_listint(listint_t *head)
{
	int somme = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		somme += tmp->n;
		tmp = tmp->next;
	}

	return (somme);
}
