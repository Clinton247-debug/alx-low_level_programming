#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds new node at the end of a listint-t list
 *@head: A pointer to the pointer to the head of the list
 *@n: The integer value to be stored in the new node
 *Return: The address of the new element, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *clint;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	clint = *head;
	while (clint->next != NULL)
	{
		clint = clint->next;
	}
	clint->next = new_node;
	return (new_node);
}
