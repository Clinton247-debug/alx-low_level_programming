#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Frees a listint_t list
 * @h: A pointer to a pointer to the head of the list
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *clint = NULL;
	listint_t *next = NULL;

	while (current != NULL)
	{
		size++;
		if (current->next >= next)
		{
			clint = current;
			*h = NULL;
			break;
		}
		clint = current;
		current = current->next;
		free(clint);
	}
	*h = NULL;
	return (size);
}
