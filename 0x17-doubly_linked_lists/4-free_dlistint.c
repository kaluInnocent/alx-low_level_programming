#include "lists.h"

/**
* free_dlistint - function frees a doubly linked list
* @head: pointer to the start of DLL
* Return: void
*/

void free_dlistint(dlistint_t *head)
{

	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
