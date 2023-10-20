#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a
 * list_t list.
 * @head: Pointer to the head of the linked list.
 * @str: Pointer to a constant character string.
 * Return: Address of the new element, NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, length = 0;
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);


	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL); 
	}

	for (i = 0; str[i] != '\0'; i++)
		length++;
	new_node->len = length;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
