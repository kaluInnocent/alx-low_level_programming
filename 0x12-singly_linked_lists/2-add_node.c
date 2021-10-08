#include "lists.h"
#include<stdlib.h>
#include<stdio.h>
#include <string.h>

/**
* add_node - function adds a new node at the beginning of a list_t list
* @head: head of node
* @str: string to be duplicated
* Return: The address of the new elements or NULL otherwise
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int str_len;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (*str)
	{
		str_len++;
		str++;
	}
	new->len = str_len;
	new->next = *head;
	*head = new;
	return (new);
}
