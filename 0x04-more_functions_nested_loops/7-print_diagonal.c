#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of slashes to be printed
 *
 * Return: always 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
