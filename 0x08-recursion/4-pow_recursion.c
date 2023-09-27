#include "main.h"

/**
 * _pow_recursion - calculates x raised to y.
 * @x: integer
 * @y: integer
 * Return: string
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
