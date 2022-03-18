#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 *
 * Return: always 0
 */
void print_square(void)
{
	int i;
	int j = size;

	while (size > 0)
	{
		for (i = j; i <= j; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
		size--;
	}
}
