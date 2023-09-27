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
	size_t len = 0;
	int diff;
	listint_t *clint;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff >  0)
		{
			clint = (*h)->next;
			free(*h);
			*h = clint;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
