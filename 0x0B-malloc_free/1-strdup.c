#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int x, a = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	aaa = malloc(sizeof(char) * (x + 1));

	if (aaa == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		aaa[a] = str[a];

	return (aaa);
}
