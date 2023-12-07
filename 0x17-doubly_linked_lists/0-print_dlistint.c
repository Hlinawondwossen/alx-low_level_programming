#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the start of the linked list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (h == NULL)
		return 0;

	for (; current != NULL; current = current->next)
	{
		printf("%d\n", current->n);
		count++;
	}

	return count;
}
