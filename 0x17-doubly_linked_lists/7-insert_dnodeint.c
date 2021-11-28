#include "lists.h"

/**
* insert_dnodeint_at_index - function inserts a node at a given position in DLL
* @h: pointer to a pointer to the start of the list
* @idx: index of the list where the new node should be added
* @n: data to be inserted at the given position
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *ptr;
	unsigned int count;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);

	new = make_node(n);
	if (new == NULL)
		return (NULL);

	ptr = *h;
	if (idx == 0)
	{
		if (*h == NULL)
			*h = new;
		else
		{
			new->next = ptr;
			ptr->prev = new;
			*h = new;
		}
		return (new);
	}
	for (count = 1; ptr->next != NULL || count == idx; count++)
	{
		if (count == idx)
		{
			if (ptr->next != NULL)
				ptr->next->prev = new;
			new->next = ptr->next;
			ptr->next = new;
			new->prev = ptr;
			return (new);
		}
		ptr = ptr->next;
	}
	free(new);
	return (NULL);
}
