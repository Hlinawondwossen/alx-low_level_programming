#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - returns if the number is prime.
 * @n: integer
 * Return: method
 */


int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_helper(n, n - 1));
}

/**
 * is_prime_helper - returns if the number is prime.
 * @n: integer
 * @i: integer
 * Return: method
 */

int is_prime_helper(int n, int i)
{
if (i == 1)
return (1);
else if (n % i == 0)
return (0);
else
return (is_prime_helper(n, i - 1));
}
