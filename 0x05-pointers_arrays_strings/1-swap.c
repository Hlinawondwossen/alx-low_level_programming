#include <stdio.h>

/**
 * swap_int -Swaps the valuees of two integers.
 * @x: The first intiger to be swapped.
 * @y: The second intiger to be swapped.
 *
 * Return: noting 
 */

void swap_int(int *x, int *y)
/* the function that swaps the values of the two intigers. */
{
	int temp = *x;

	*x = *y;
	*y = temp;
}
