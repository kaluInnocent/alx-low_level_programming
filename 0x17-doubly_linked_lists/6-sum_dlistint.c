#include "lists.h"

/**
* sum_dlistint - function sums all the data (n) of doubly linked list
* @head: pointer to the start of the DLL
* Return: Sum of the data in the DLL or 0 if DLL is empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (head == NULL)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
