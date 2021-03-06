#include "lists.h"

/**
* get_dnodeint_at_index - function returns the nth node of DLL
* @head: pointer to the start of the node
* @index: index of the node starting from 0
* Return: nth index. NULL if it doesnt exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
		for (i = 0; i <= index; i++)
		{
			if (i == index)
			{
				return (head);
			}
			head = head->next;
		}
	return (NULL);
}
