#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* print_dlistint - function prints the elements of a doubly linked list
* @h: pointer to the start of the doubly linked list
* Return: number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
