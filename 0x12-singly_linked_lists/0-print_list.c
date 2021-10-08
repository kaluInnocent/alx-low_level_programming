#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_list - function prints all elements of a list
* @h: node head
* Return: the number of nodes in the head
*/
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%d] %s", h->len, h->str);
			node_count++;
			h = h->next;
		}
	}
	return (node_count);
}
