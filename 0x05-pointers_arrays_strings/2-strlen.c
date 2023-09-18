#include "main.h"

/**
* _strlen - calculates the length of a string.
* @s: pointer to a char
* Return: length of a string.
*/

int _strlen(char *s)
{
int c = 0;
while (*s != '\0')
{
c++;
s++;
}
return (c);
}

