#include "main.h"

/**
 * _strchr - locates the string.
 * @s: The first pointer
 * @c: character
 * Return: pointer 
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

if (c == '\0')
return (s);

return (0);
}
