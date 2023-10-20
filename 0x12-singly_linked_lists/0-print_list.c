#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list of arguments in a linked list.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* Traverse the linked list */
	for (; h != NULL; h = h->next)
	{
		/* Check if the string is NULL */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n"); /* Print format for NULL string */
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str); /* Print format for non-NULL string */
		}

		count++; /* Increment the node count */
	}

	return (count);
}
