#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t check
 * Return: 0 if the list is not looped, otherwise The number
 * of nodes in the lsit
 */

size_t looped_listint_len(const listint_t *head)
{
	size_t nodes = 1;
	const listint_t *clint, *pop;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	clint = head->next;
	pop = (head->next)->next;

	while (pop)
	{
		if (clint == pop)
		{
			clint = head;
			while (clint != pop)
			{
				nodes++;
				clint = clint->next;
				pop = pop->next;
			}
			clint = clint->next;
			while (clint != pop)
			{
				nodes++;
				clint = clint->next;
			}
			return (nodes);
		}
		clint = clint->next;
		pop = (pop->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 * Return: The number of nodes int the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, idx = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

