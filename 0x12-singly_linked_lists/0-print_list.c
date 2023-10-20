#include <stdio.h>
#include "lists.h"

/**
 * print_list - all elemnt will bw print.
 * @h: it points to the head.
 * Return: it shows the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	/* Traverse the linked list */
	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n"); /* Print format for NULL string */
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str); /* Print format for non-NULL string */
		}

		node_count++; /* Increment the node count */
	}

	return (node_count);
}
