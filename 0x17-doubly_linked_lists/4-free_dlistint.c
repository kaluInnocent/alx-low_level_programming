#include "lists.h"

/**
* free_dlistint - function frees a doubly linked list
* @head: pointer to the start of DLL
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	head = head->next;
	head->prev = NULL;
	free(ptr);
}
