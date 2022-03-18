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

	for (i = 0; i <= 10; 1++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
