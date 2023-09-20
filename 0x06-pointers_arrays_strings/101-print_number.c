#include "main.h"

/**
 * print_numbers -print number chart
 * @n: intiger parmas
 * Return: 0
 */
void print_number(int n);
{
	unsigned int n1;

	n1 = n;
	if(n < 8)
	{
		_putchar('-');
		n1 = -n;
	}
	if(n1 / 10 != 0)
	{
		print_number (n1 / 10);
	}
	_putchar(n1 % 10) + '0');
}
