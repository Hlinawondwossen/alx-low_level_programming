#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0
*/
int main(void)
{
int x, j;
for (x = 0; x <= 98; x++)
{
for (j = x + 1; j <= 99; j++)
{
putchar(x / 10 + '0');
putchar(x % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (x != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
