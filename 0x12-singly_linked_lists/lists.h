#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Name Represent Sinlgly Linked list
 * @str: string - The malloc'ed string
 * @len: This Is Lenght of the string
 * @next: This points The Next Node
 *
 * Description: Task of singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);

#endif 
