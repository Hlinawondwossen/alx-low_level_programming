#include "main.h"

/**
 * print_alphabet - prints a to z
 * Return: 0
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

/**
 * main - main function
 * Return: 0
*/
int main(void)
{
print_alphabet();
return (0);
}
