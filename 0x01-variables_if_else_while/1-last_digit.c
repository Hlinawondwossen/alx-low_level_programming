#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a random number
 * Return: 0
*/

/* betty style doc for function main goes there */
int main(void)
{
int n, last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (n % 10 < 6 && n % 10 != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
if (n % 10 == 0)
printf("Last digit of %d is %d and is 0\n", n, last);
if (n % 10 > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last);
return (0);
}}
