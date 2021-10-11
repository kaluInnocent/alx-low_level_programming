#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint - function prints all the elements of a listint_t list
* @h: The head of the node
* Return: The number of nodes in the list
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t node_count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
