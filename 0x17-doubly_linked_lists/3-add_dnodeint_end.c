#include "lists.h"
dlistint_t *make_node(const int n);

/**
* add_dnodeint_end - function adds a new node at the end of a DLL
* @head: a pointer to pointer to the start of the node
* @n: data to be added
* Return: The address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = make_node(n);
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new;
	new->prev = ptr;
	return (new);
}

/**
* make_node - function creates a new node
* @n: data to be inserted in the new node
* Return: A newly created node
*/

dlistint_t *make_node(const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
