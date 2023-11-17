#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list: Prints all the elements in a linked list
 * @*h - Pointer to the head node in linked list.
 * Return: Return number of nodes in linked list.
 */

size_t print_list(const size_t *h)
{
	size_t i = 0;
	while( h != NULL )
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else 
			printf("[%d] %s.\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
