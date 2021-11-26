#include "lists.h"

/**
* dlistint_len - function counts the number of nodes in a doubly linked list
* @h: pointer to the start of the list
* Return: returns the count of nodes or 0 if empty
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
