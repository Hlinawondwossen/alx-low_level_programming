#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @num: The number to start printing from
 * Return: Always 0.
 */

void print_to_98(int num)

{

    	if (num <= 98)
	{
	for (; num <= 98; num++)
	{
	if (num == 98)
	{
	printf("%d", num);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", num);
	}
	}
	}
	else
	{
	for (; num >= 98; num--)
	{
        if (num == 98)
	{
	printf("%d", num);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", num);
	}
	}
	}
}
