#include <stdio.h>

/**
* _strlen - returns the length of a string.
* @str: pointer to a char
* Return: length of a string
*/
size_t strlen(const char *str)

{
	size_t length = 0;

	while (*str++);
	length++;
	return (length);
}
