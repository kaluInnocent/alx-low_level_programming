#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include<string.h>

/**
* list_len - function prints all elements of a list
* @h: node head
* Return: the number of nodes in the head
*/
size_t list_len(const list_t *h)
{
	size_t node_count = 0;
	const list_t *new = h;

	while (new != NULL)
	{
		node_count++;
		new = new->next;
	}
	return (node_count);
}
