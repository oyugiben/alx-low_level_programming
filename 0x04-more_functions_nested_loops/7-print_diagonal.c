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
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			i = j - n;
			while (i > 0)
			{
				_putchar(' ');
				i--;
			}
			putchar('\\');
			putchar('\n');
			n--;
		}
	}
}
