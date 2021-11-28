#include "lists.h"

/**
* delete_dnodeint_at_index - function deletes a node at agiven position
* @head: Pointer to a pointer to the start of the DLL
* @index: position of the node to be deleted
* Return: 1 if sucessful, -1 otherwise
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        dlistint_t ptr;
        unsigned int count;
        
        if (head == NULL || *head == NULL)
                return (-1);
        
        ptr = *head;
        if (index == 0)
        {
                *head = ptr->next;
                if (ptr->next != NULL)
                        (*head)->prev = NULL;
                free(ptr);
                return (1);
        }
        for (count = 0; ptr != NULL; count++)
        {
                if (count == index)
                {
                        if (ptr->next != NULL)
                                ptr->next->prev = ptr->prev;
                        if (ptr->prev != NULL)
                                ptr->prev->next = ptr->next;
                        free(ptr);
                        return (1);
                }
                prt = ptr->next;
        }
        return (-1);
}
