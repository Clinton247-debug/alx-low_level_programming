#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of element in a listint_t list
 * @h: A pointer to the head of the list
 * Return: The number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
