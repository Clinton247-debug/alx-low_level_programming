#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns thr sum of all the data(n) of a listint_t list
 * @head: A pointer to the head of the list
 * Return: The sum of all the data, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
