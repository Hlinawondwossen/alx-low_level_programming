#include "main.h"

/**
 * jack_bauer - prints every minute of the dat of Jack Bauer
 * Return: ...
 */

void jack_bauer(void)

{

	int x, y, z, a;

	for (x = 0; x <= 2; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	if ((x <= 1 && y <= 9) || (x <= 2 && y <= 3))
	{
	for (z = 0; z <= 5; z++)
	{
	for (a = 0; a <= 9; a++)
	{
	_putchar(x + '0');
	_putchar(y + '0');
	_putchar(58);
	_putchar(z + '0');
	_putchar(a + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
