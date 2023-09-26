#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 -  Frees a listint_t list
 * @head: A pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next_node;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	current = *head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}
