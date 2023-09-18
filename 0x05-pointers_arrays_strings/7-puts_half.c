#include "main.h"

/**
 * puts_half - concatenates two strings
 * @str: string to be appended to
 * Return: pointer to dest
 */

void puts_half(char *str)
{
int i, j, k;

i = 0;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
j = i / 2;
}
else
{
j = (i + 1) / 2;
}
for (k = j; k < i; k++)
{
_putchar(str[k]);
}
_putchar('\n');
}
