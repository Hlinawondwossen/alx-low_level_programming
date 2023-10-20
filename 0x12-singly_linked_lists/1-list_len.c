#include "lists.h"

/**
 * list_len - Returns the number of elements in
 * a linked list_t list.
 * @h: Pointer to the head of the linked list.
 * Return: Number of elements in linked list.
 */
size_t list_len(const list_t *h)
{
    size_t node_count = 0;

    /* Traverse the linked list */
    for (; h != NULL; h = h->next)
    {
        node_count++; /* Increment the node count */
    }

    return (node_count);
}
