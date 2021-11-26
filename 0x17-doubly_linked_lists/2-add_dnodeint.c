#include "lists.h"

/**
* add_dnodeint - function adds a new node at the begining of a linked list
* @head: pointer to pointer to the start of the list
* @n: data to be added
* Return: address of the new element or null if it fails
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(listint_t));
	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		new_node->prev = NULL;
	}
	else
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
