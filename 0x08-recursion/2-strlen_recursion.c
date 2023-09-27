#include "main.h"

/**
 * _strlen_recursion - print length of strings.
 * @s: The first pointer
 * Return: string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
