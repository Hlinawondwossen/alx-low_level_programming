#include "main.h"

/**
 * _memcpy - copy memory array.
 * @dest: The first pointer
 * @src: The second pointer
 * @n: integer
 * Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int y;

for (y = 0; y < n; y++)
{
dest[y] = src[y];
}

return (dest);
}
