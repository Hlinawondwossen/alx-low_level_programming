#include "main.h"

int sqrt_check(int n, int i);

/
 * _sqrt_recursion - square root of a number.
 * @n: integer
 * Return: method
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_check(n, 1));
}

/
 * sqrt_check - square root of a number.
 * @n: integer
 * @i: integer
 * Return: string
 */

int sqrt_check(int n, int i)
{
if (i * i > n)
return (-1);
else if (i * i == n)
return (i);
return (sqrt_check(n, i + 1));
}
