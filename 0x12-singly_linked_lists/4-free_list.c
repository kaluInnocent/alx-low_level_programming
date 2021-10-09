#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_list -function frees a list_t list
* @head: head of the node to be freed
* Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
