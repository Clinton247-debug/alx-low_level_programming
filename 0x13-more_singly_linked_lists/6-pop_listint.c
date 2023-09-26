#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: A pointer to the pointer to the head of the list
 * Return: THe data (n) of the deleted node, or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *clint;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	clint = *head;
	data = clint->n;
	*head = clint->next;
	free(clint);

	return (data);
}
