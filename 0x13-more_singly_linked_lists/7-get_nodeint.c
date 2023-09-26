#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list
 * @head: A pointer to the head of the list
 * @index: THe index of the node to retrieve (startint at 0)
 * Return: A pointer to the nth node, or NULL if the node does noit exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
