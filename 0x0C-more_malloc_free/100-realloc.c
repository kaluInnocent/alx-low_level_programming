#include "main.h"
#include <stdlib.h>
/**
 * _memcpy - copy memory data from src to dest
 * @dest: memory destination
 * @src: memory source
 * @n: size of new memory
 */
void _memcpy(void *dest, void *src, size_t n)
{
	size_t i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
}

/**
* _realloc - function reallocates a memory block using malloc and free
* void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
* _realloc - Reallocates a memory block using malloc and free.
* @ptr: A pointer to the memory previously allocated.
* @old_size: The size in bytes of the allocated space for ptr.
* @new_size: The size in bytes for the new memory block.
*
* Return: If new_size == old_size - ptr.
* If new_size == 0 and ptr is not NULL - NULL.
* Otherwise - a pointer to the reallocated memory block.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		newPtr = malloc(new_size);
		if (newPtr)
		{
			_memcpy(newPtr, ptr, old_size);
			free(ptr);
		}
		return (newPtr);
	}
	return (0);
}
