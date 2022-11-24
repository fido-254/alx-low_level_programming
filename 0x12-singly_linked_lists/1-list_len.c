#include <stdio.h>
#include "lists.h"
/**
 * list_len - Function that returns the number of elements in a linked list
 *
 * @h: pointer to linked list
 *
 * Return: Return number of elements
 **/
size_t list_len(const list_t *h)
{
	const list_t *pointer;
	unsigned int i;

	pointer = h;

	for (i = 0; pointer; i++)
	{
		pointer = pointer->next;
	}
	return (i);
}
