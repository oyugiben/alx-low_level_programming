#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of input integer
 * @i: integer whose last number is to be printed
 *
 * Return: Value of the ;ast digit
 */
int print_last_digit(int i)
{
	int x;

	if (i == 0)
		x = 0;
	else
		x = (abs(i) % 10);
	_putchar(x);
	return (x);
}
