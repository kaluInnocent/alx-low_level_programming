#include "lists.h"

/**
* print_dlistint - function prints the elements of a doubly linked list
* @h: pointer to the start of the doubly linked list
* Return: number of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
