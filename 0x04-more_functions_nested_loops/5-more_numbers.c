#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 13; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
