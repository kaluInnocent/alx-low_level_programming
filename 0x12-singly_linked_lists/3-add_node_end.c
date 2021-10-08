#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
#include <string.h>

/**
* add_node_end - function adds a new node at the end of a list_t list
* @head: head of node
* @str: string to be duplicated
* Return: The address of the new elements or NULL otherwise
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	int str_len;
	char *dup;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (*str)
	{
		str_len++;
		str++;
	}
	new->str = dup;
	new->len = str_len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
