#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * @n: starting value
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98)
		printf("%i, ", n);
	_putchar('\n');
}
