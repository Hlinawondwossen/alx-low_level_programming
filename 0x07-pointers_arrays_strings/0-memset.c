#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @b: The first pointer
 * @s: The second pointer
 * @n: integer
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}

return (s);
}
